#include <Stepper.h>

const int stepsPerRevolution = 2048;

int motSpeed=10;

Stepper mystepper(stepsPerRevolution, -8, -9, -10, -11);

int stepCount = 0;

void setup() {
  mystepper.setSpeed(motSpeed);

}
void loop() {
  
  mystepper.step(stepsPerRevolution);
  delay(500);
  mystepper.step(stepsPerRevolution);
  delay(500);
}
