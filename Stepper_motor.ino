#include <Stepper.h>

Stepper myStepper(200, 8, 9, 10, 11);

void setup()
{ 
  myStepper.setSpeed(30);
}

void loop() 
{
  myStepper.step(200);
}
