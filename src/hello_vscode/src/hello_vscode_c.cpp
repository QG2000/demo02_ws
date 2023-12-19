#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"hello");
    setlocale(LC_ALL,"");
    ROS_INFO("hello,哈哈哈");

    return 0;
}
