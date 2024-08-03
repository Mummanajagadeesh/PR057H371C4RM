#include <Servo.h>

// Define constants
const int numSensors = 5;
const int sensorPins[numSensors] = {A0, A1, A2, A3, A4};
const int servoPins[numSensors] = {0, 1, 2, 3, 4};
const int minAnalogValue = 990;
const int maxAnalogValue = 1017;
const int minServoAngle = 0;
const int maxServoAngle = 180;
const int delayTime = 15;

Servo servos[numSensors];

void setup() {
  // Attach servo pins
  for (int i = 0; i < numSensors; i++) {
    servos[i].attach(servoPins[i]);
    pinMode(sensorPins[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < numSensors; i++) {
    // Read sensor value
    int sensorValue = analogRead(sensorPins[i]);

    // Map and constrain the value to the servo range
    int servoAngle = map(sensorValue, minAnalogValue, maxAnalogValue, minServoAngle, maxServoAngle);
    servoAngle = constrain(servoAngle, minServoAngle, maxServoAngle);

    // Write the angle to the servo
    servos[i].write(servoAngle);
  }

  delay(delayTime);
}