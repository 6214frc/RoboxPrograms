#include <Servo.h>

Servo left;
Servo right;
void RobotGoForward(float seconds); //Tells the robot how far to go for one second. It is actually in seconds.
void SetRobotSpeed(float percent); //This will tell the robot how fast to go. You must follow it by a delay and the turn it off.
void TurnRobotLeft(float turn); 
void TurnRobotRight(float turn);

// the setup routine runs *once* when you press reset:
void setup() {
  Serial.begin(9600);
  left.attach(9);
  right.attach(10);
  TurnRobotRight(25);


}

// the loop routine runs over and over again forever:
void loop() {
TurnRobotRight(25);

}


//Code that defines what the declarations do goes here:

void RobotGoForward(float seconds) { //Makes the robot go forward for X seconds then stops.
  SetRobotSpeed(100);
  delay(seconds*1000);
  SetRobotSpeed(0);
}

void SetRobotSpeed(float percent) {
  left.write((int)(-turn/100*90+90));
  right.write((int)(-turn/100*90+90));
}

void TurnRobotLeft(float turn) {
  left.write(0);
  right.write(0);
  delay(turn);
  SetRobotSpeed(0);
}

void TurnRobotRight(float turn) {
  left.write(180);
  right.write(180);
  delay(turn);
  SetRobotSpeed(0);
}


