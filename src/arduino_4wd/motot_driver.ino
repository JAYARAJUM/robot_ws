#include "motor_driver.h"

#define MOTOR1_PWM 4
#define MOTOR1_DIR 5
#define MOTOR2_PWM 6
#define MOTOR2_DIR 7
#define MOTOR3_PWM 8
#define MOTOR3_DIR 9
#define MOTOR4_PWM 10
#define MOTOR4_DIR 11

void initMotorController() {
  pinMode(MOTOR1_PWM, OUTPUT);
  pinMode(MOTOR1_DIR, OUTPUT);
  pinMode(MOTOR2_PWM, OUTPUT);
  pinMode(MOTOR2_DIR, OUTPUT);
  pinMode(MOTOR3_PWM, OUTPUT);
  pinMode(MOTOR3_DIR, OUTPUT);
  pinMode(MOTOR4_PWM, OUTPUT);
  pinMode(MOTOR4_DIR, OUTPUT);
}

void setMotorSpeed(int i, int spd) {
  unsigned char reverse = 0;

  if (spd < 0)
  {
    spd = -spd;
    reverse = 1;
  }
  if (spd > 255)
    spd = 255;
  
  if (i == FRONT_LEFT) {
    if (reverse)
      digitalWrite(MOTOR1_DIR, HIGH);
    else
      digitalWrite(MOTOR1_DIR, LOW);
    analogWrite(MOTOR1_PWM, spd);
  }
  else if (i == FRONT_RIGHT) {
    if (reverse)
      digitalWrite(MOTOR2_DIR, HIGH);
    else
      digitalWrite(MOTOR2_DIR, LOW);
    analogWrite(MOTOR2_PWM, spd);
  }
  else if (i == REAR_LEFT) {
    if (reverse)
      digitalWrite(MOTOR3_DIR, HIGH);
    else
      digitalWrite(MOTOR3_DIR, LOW);
    analogWrite(MOTOR3_PWM, spd);
  }
  else if (i == REAR_RIGHT) {
    if (reverse)
      digitalWrite(MOTOR4_DIR, HIGH);
    else
      digitalWrite(MOTOR4_DIR, LOW);
    analogWrite(MOTOR4_PWM, spd);
  }
}

void setMotorSpeeds(int m1, int m2, int m3, int m4) {
  setMotorSpeed(FRONT_LEFT, m1);
  setMotorSpeed(FRONT_RIGHT, m2);
  setMotorSpeed(REAR_LEFT, m3);
  setMotorSpeed(REAR_RIGHT, m4);
}