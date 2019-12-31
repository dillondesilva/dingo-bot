#include <AFMotor.h>

AF_DCMotor motor3(3);
AF_DCMotor motor2(2);
void setup() {
  // put your setup code here, to run once:
  motor3.setSpeed(255);
  motor2.setSpeed(255);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor3.run(FORWARD);
  motor2.run(FORWARD);
}
