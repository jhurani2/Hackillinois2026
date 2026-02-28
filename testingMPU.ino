#include <Wire.h>
#include <MPU6050_tockn.h>

MPU6050 mpu(Wire);

void setup() {
  Serial.begin(115200);
  Wire.begin();

  mpu.begin();
  mpu.calcGyroOffsets(true);

  Serial.println("MPU6050 Ready");
}

void loop() {
  mpu.update();

  Serial.print("Roll: ");
  Serial.print(mpu.getAngleX());
  Serial.print("   Pitch: ");
  Serial.print(mpu.getAngleY());
  Serial.print("   Yaw: ");
  Serial.println(mpu.getAngleZ());

  delay(100);
}