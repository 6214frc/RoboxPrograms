#include <Servo.h>

Servo left;
Servo right;
void RobotGoForward(float seconds);
void SetRobotSpeed(int percent);
void TurnRobot(int turn);

// the setup routine runs *once* when you press reset:
void setup() {

  left.attach(9); //Tells the program where the left motor is attached
  right.attach(10);//Tells the program where the right motor is attached

}

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
}
