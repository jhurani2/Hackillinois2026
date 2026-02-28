#include <Servo.h>

Servo testServo;

#define SERVO_PIN 10

// ===== SAFE MECHANICAL LIMITS =====
#define SERVO_MIN_ANGLE  40
#define SERVO_MAX_ANGLE 140

// Motion tuning
#define STEP_SIZE   1      // degrees per step
#define STEP_DELAY  15     // ms per step

void setup() {
  Serial.begin(115200);
  testServo.attach(SERVO_PIN);

  Serial.println("MG99R Servo Limited-Range Test");
  Serial.print("Range: ");
  Serial.print(SERVO_MIN_ANGLE);
  Serial.print(" -> ");
  Serial.println(SERVO_MAX_ANGLE);
}

void loop() {

  // // Forward sweep
  // for (int angle = SERVO_MIN_ANGLE; angle <= SERVO_MAX_ANGLE; angle += STEP_SIZE) {
  //   testServo.write(angle);
  //   delay(STEP_DELAY);
  // }

  // delay(300);

  // // Reverse sweep
  // for (int angle = SERVO_MAX_ANGLE; angle >= SERVO_MIN_ANGLE; angle -= STEP_SIZE) {
  //   testServo.write(angle);
  //   delay(STEP_DELAY);
  // }

  // delay(500);
  testServo.write(130);
}