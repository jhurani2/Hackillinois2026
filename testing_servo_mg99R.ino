#include <Servo.h>

#define PIN_TEST_SERVO 10

Servo TestServo;

void setup()
{
  TestServo.attach(PIN_TEST_SERVO);
  TestServo.write(90);
  delay(1000);
}

void loop()
{
  // for (int angle = 0; angle <= 180; angle += 2)
  // {
  //   TestServo.write(angle);
  //   delay(15);
  // }

  // for (int angle = 180; angle >= 0; angle -= 2)
  // {
  //   TestServo.write(angle);
  //   delay(15);
  // }
  TestServo.write(180);
}