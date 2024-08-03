#include "motor_driver.h"
#include "commands.h"

// Motor 1 - Front Left
#define MOTOR1_ENABLE 4
#define MOTOR1_IN1 5
#define MOTOR1_IN2 6

// Motor 2 - Front Right
#define MOTOR2_ENABLE 7
#define MOTOR2_IN1 8
#define MOTOR2_IN2 9

// Motor 3 - Rear Left
#define MOTOR3_ENABLE 10
#define MOTOR3_IN1 11
#define MOTOR3_IN2 12

// Motor 4 - Rear Right
#define MOTOR4_ENABLE 13
#define MOTOR4_IN1 14
#define MOTOR4_IN2 15

void initMotorController() {
  // Set all the motor control pins to outputs
  pinMode(MOTOR1_ENABLE, OUTPUT);
  pinMode(MOTOR1_IN1, OUTPUT);
  pinMode(MOTOR1_IN2, OUTPUT);
  pinMode(MOTOR2_ENABLE, OUTPUT);
  pinMode(MOTOR2_IN1, OUTPUT);
  pinMode(MOTOR2_IN2, OUTPUT);
  pinMode(MOTOR3_ENABLE, OUTPUT);
  pinMode(MOTOR3_IN1, OUTPUT);
  pinMode(MOTOR3_IN2, OUTPUT);
  pinMode(MOTOR4_ENABLE, OUTPUT);
  pinMode(MOTOR4_IN1, OUTPUT);
  pinMode(MOTOR4_IN2, OUTPUT);
}

void setMotorSpeed(int i, int spd) {
  int enable_pin, in1_pin, in2_pin;
  
  // Determine which motor we're setting
  switch(i) {
    case FRONT_LEFT:
      enable_pin = MOTOR1_ENABLE;
      in1_pin = MOTOR1_IN1;
      in2_pin = MOTOR1_IN2;
      break;
    case FRONT_RIGHT:
      enable_pin = MOTOR2_ENABLE;
      in1_pin = MOTOR2_IN1;
      in2_pin = MOTOR2_IN2;
      break;
    case REAR_LEFT:
      enable_pin = MOTOR3_ENABLE;
      in1_pin = MOTOR3_IN1;
      in2_pin = MOTOR3_IN2;
      break;
    case REAR_RIGHT:
      enable_pin = MOTOR4_ENABLE;
      in1_pin = MOTOR4_IN1;
      in2_pin = MOTOR4_IN2;
      break;
    default:
      return; // Invalid motor
  }

  // Ensure the speed is within bounds
  spd = constrain(spd, -255, 255);

  // Set the motor direction
  if (spd >= 0) {
    digitalWrite(in1_pin, HIGH);
    digitalWrite(in2_pin, LOW);
  } else {
    digitalWrite(in1_pin, LOW);
    digitalWrite(in2_pin, HIGH);
    spd = -spd; // Make speed positive for PWM
  }

  // Set the motor speed
  analogWrite(enable_pin, spd);
}

void setMotorSpeeds(int m1, int m2, int m3, int m4) {
  setMotorSpeed(FRONT_LEFT, m1);
  setMotorSpeed(FRONT_RIGHT, m2);
  setMotorSpeed(REAR_LEFT, m3);
  setMotorSpeed(REAR_RIGHT, m4);
}