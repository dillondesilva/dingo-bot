#include <AFMotor.h>

AF_DCMotor motor3(3);
void setup() {
  // put your setup code here, to run once:
  motor3.setSpeed(255);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor3.run(FORWARD);
}
