#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ch_basic_publisher_node");
  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);

  //int count;

  std::string my_name;
  std::string chat_message;

  //std::cin >> mesage;

  ros::Rate loop_rate(1);

  std::cout << "Input your name : " << my_name ;
  getline(std::cin, my_name);

  while(ros::ok())
  {
    std_msgs::String msg;

    std::cout << "send message : ";
    getline(std::cin, chat_message);

    msg.data = my_name + " : " + chat_message;

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
   }

  // while (ros::ok())
  {
   // std::cout << "COM1: " << msg.data << std::endl;
   // std_msgs::String msg;
   // msg.data = "[mesage]";
   // std::string mesage;
   // std::cin >> mesage;


   //chatter_pub.publish(msg);

   //ros::spinOnce();

   //loop_rate.sleep();
  }

  return 0;
}
