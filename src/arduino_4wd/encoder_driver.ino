#include "encoder_driver.h"

volatile long encoderCounts[] = {0, 0, 0, 0};

void initEncoders() {
  pinMode(FRONT_LEFT_ENC_A, INPUT_PULLUP);
  pinMode(FRONT_LEFT_ENC_B, INPUT_PULLUP);
  pinMode(FRONT_RIGHT_ENC_A, INPUT_PULLUP);
  pinMode(FRONT_RIGHT_ENC_B, INPUT_PULLUP);
  pinMode(REAR_LEFT_ENC_A, INPUT_PULLUP);
  pinMode(REAR_LEFT_ENC_B, INPUT_PULLUP);
  pinMode(REAR_RIGHT_ENC_A, INPUT_PULLUP);
  pinMode(REAR_RIGHT_ENC_B, INPUT_PULLUP);
  
  attachInterrupt(digitalPinToInterrupt(FRONT_LEFT_ENC_A), frontLeftEncoderISR, CHANGE);
  attachInterrupt(digitalPinToInterrupt(FRONT_RIGHT_ENC_A), frontRightEncoderISR, CHANGE);
  attachInterrupt(digitalPinToInterrupt(REAR_LEFT_ENC_A), rearLeftEncoderISR, CHANGE);
  attachInterrupt(digitalPinToInterrupt(REAR_RIGHT_ENC_A), rearRightEncoderISR, CHANGE);
}

long readEncoder(int i) {
  return encoderCounts[i];
}

void resetEncoder(int i) {
  encoderCounts[i] = 0;
}

void resetEncoders() {
  for(int i = 0; i < 4; i++) {
    resetEncoder(i);
  }
}

void frontLeftEncoderISR() {
  if (digitalRead(FRONT_LEFT_ENC_A) == digitalRead(FRONT_LEFT_ENC_B)) {
    encoderCounts[FRONT_LEFT]++;
  } else {
    encoderCounts[FRONT_LEFT]--;
  }
}

void frontRightEncoderISR() {
  if (digitalRead(FRONT_RIGHT_ENC_A) == digitalRead(FRONT_RIGHT_ENC_B)) {
    encoderCounts[FRONT_RIGHT]++;
  } else {
    encoderCounts[FRONT_RIGHT]--;
  }
}

void rearLeftEncoderISR() {
  if (digitalRead(REAR_LEFT_ENC_A) == digitalRead(REAR_LEFT_ENC_B)) {
    encoderCounts[REAR_LEFT]++;
  } else {
    encoderCounts[REAR_LEFT]--;
  }
}

void rearRightEncoderISR() {
  if (digitalRead(REAR_RIGHT_ENC_A) == digitalRead(REAR_RIGHT_ENC_B)) {
    encoderCounts[REAR_RIGHT]++;
  } else {
    encoderCounts[REAR_RIGHT]--;
  }
}