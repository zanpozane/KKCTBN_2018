#include "../../include/whatever/haha.hpp"
#include "ros/ros.h"
#include "mavros_msgs/OverrideRCIn.h"
#include "whatever/override_motor.h"
#include "whatever/node_master.h"
#include <iostream>

bool override_status = false;
bool last_override_status = true;

ros::Publisher pub_override_rc;

mavros_msgs::OverrideRCIn override_out;

void override_input_cb(const whatever::override_motor& override_recv);
void override_status_cb(const whatever::node_master& override_status_recv);

int main(int argc, char **argv)
{
  ros::init(argc, argv, "motor_controller");
  ros::NodeHandle n;

  pub_override_rc = n.advertise<mavros_msgs::OverrideRCIn>("/mavros/rc/override", 10);
  
  ros::Subscriber sub_override_motor = n.subscribe("/kkctbn/override/motor", 1, override_input_cb);
  ros::Subscriber sub_override_status = n.subscribe("/kkctbn/node/master", 1, override_status_cb);
  
  ROS_WARN("NC : motor_controller.cpp active");
  
	while(ros::ok()){
		ros::spin();
		sleep(0.2);
	}
}

void override_status_cb(const whatever::node_master& override_status_recv){
	override_status = override_status_recv.override_status;
}

void override_input_cb(const whatever::override_motor& override_recv){
	for(int i=0; i < 8; i++) override_out.channels[i] = 0;
	if(override_status == true){
		if (override_recv.throttle > MAX_PWM){
			override_out.channels[THROTTLE] = MAX_PWM;
		}
		else if (override_recv.throttle < MIN_PWM){
			override_out.channels[THROTTLE] = MIN_PWM;
		}
		else {
			override_out.channels[THROTTLE] = override_recv.throttle;
		}

		if (override_recv.steering > MAX_PWM){
			override_out.channels[STEERING] = MAX_PWM;
		}
		else if (override_recv.steering < MIN_PWM){
			override_out.channels[STEERING] = MIN_PWM;
		}
		else {
			override_out.channels[STEERING] = override_recv.steering;
		}
	}
	else{
		override_out.channels[THROTTLE] = MIDDLE_PWM;
		override_out.channels[STEERING] = MIDDLE_PWM;
	}
	pub_override_rc.publish(override_out);
}
