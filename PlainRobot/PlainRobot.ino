#include <Servo.h>

Servo left;
Servo right;
void RobotGoForward(float seconds); //Tells the robot how far to go for one second. It is actually in seconds.
void SetRobotSpeed(int percent); //This will tell the robot how fast to go. You must follow it by a delay and the turn it off.
void TurnRobot(int turn); //This function I don't know how it works exactly in terms of how fast it turns or anything but this should allow your robot to turn, taking a range from -100 to 100 and turning a specific value based on that.

// the setup routine runs *once* when you press reset:


// the loop routine runs over and over again forever:
void loop() {

}


//Code that defines what the declarations do goes here:

void RobotGoForward(float seconds) { //Makes the robot go forward for X seconds then stops.
  SetRobotSpeed(100);
  delay(seconds*1000);
  SetRobotSpeed(0);
}

void SetRobotSpeed(int percent) {
  left.write(percent/100*90+90);
  right.write(-percent/100*90+90);
}

void TurnRobot(int turn) {
  left.write(turn/100*90+90);
  right.write(turn/100*90+90);
  wait(100);
  left.write(90);
  right.write(90);
}
