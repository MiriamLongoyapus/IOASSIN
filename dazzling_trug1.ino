// C++ code
//
#include <Servo.h>

int i = 0;

Servo servo_0;

Servo servo_11;

void setup()
{
  servo_0.attach(0);

  servo_11.attach(11, 500, 2500);

  if (servo_0.read() < 30) {
    servo_11.write(90);
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}