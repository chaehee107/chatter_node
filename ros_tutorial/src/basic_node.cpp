#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "basic_node");
  ros::NodeHandle nh;

  int a=1;

  while(a<11)
  {
    ROS_INFO("20818 chaehee");
    a++;
  }

  return 0;
}
