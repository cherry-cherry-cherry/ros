#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>
int main(int argc, char **argv)
{
   /*ros::init(argc,argv,"example");
    ros::NodeHandle n;
    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("message",1000);
    ros::Rate loop_rate(10);*/
    while(ros::ok())
    {
       printf("hello world");
    }
    return 0;
}
