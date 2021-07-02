#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "stdlib.h"

int main(int argc,char** argv){
    ros::init(argc,argv,"topic_pub");
    ros::NodeHandle nh;
    char* str=argv[1];
    char* topic;
    if(strcmp(str,"vel")==0){
        topic="/pan_tilt/vel_cmd";
    }
    else if(strcmp(str,"ang")==0){
        topic="/pan_tilt/angle_cmd"; 
    }
    
    ros::Publisher ros_pub=nh.advertise<geometry_msgs::Twist>(topic,100);
    ros::Rate loop_rate(1);

    geometry_msgs::Twist msg;
    int count=0;

    while(ros::ok()){
        
        msg.angular.x=strtof(argv[2],NULL);
        msg.angular.y=strtof(argv[3],NULL);
        msg.angular.z=strtof(argv[4],NULL);

        ROS_INFO("topic :");
        ROS_INFO(topic);

        ros_pub.publish(msg);

        loop_rate.sleep();

        ++count;
        
    }
    return 0;
}