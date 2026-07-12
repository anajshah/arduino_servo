#include <Servo.h>

Servo conductorServo; 

const int joyStickX = A0;
int joyStickNum = 0;   
int servoAngle = 0;       

void setup() {
  conductorServo.attach(9); 
}

void loop() {
  joyStickNum = analogRead(joyStickX);
  
  servoAngle = map(joyStickNum, 0, 1023, 0, 180);
  
  conductorServo.write(servoAngle);
  
  delay(15);
}