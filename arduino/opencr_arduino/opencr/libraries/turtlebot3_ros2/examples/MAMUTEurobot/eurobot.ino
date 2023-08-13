#include <TurtleBot3_ROS2.h>
void setup()
{
  TurtleBot3Core::begin("Waffle_OpenManipulator");
}
void loop()
{
  // Run TurtleBot3 core for communicating with ROS2 node, sensing several sensors and controlling actuators.
  TurtleBot3Core::run();
}