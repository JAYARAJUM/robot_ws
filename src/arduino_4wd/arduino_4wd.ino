#define USE_BASE
#define ARDUINO_ENC_COUNTER
#define L298_MOTOR_DRIVER

#include "Arduino.h"
#include "commands.h"
#include "motor_driver.h"
#include "encoder_driver.h"
#include "diff_controller.h"

#define BAUDRATE     115200
#define MAX_PWM        255
#define PID_RATE           30     // Hz
const int PID_INTERVAL = 1000 / PID_RATE;
unsigned long nextPID = PID_INTERVAL;
#define AUTO_STOP_INTERVAL 2000
long lastMotorCommand = AUTO_STOP_INTERVAL;

int arg = 0;
int index = 0;
char chr;
char cmd;
char argv1[16];
char argv2[16];
long arg1;
long arg2;

void setup() {
  Serial.begin(BAUDRATE);
  
  initMotorController();
  initEncoders();
  resetPID();
}

void loop() {
  while (Serial.available() > 0) {
    chr = Serial.read();
    
    if (chr == 13) {
      if (arg == 1) argv1[index] = NULL;
      else if (arg == 2) argv2[index] = NULL;
      runCommand();
      resetCommand();
    }
    else if (chr == ' ') {
      if (arg == 0) arg = 1;
      else if (arg == 1)  {
        argv1[index] = NULL;
        arg = 2;
        index = 0;
      }
      continue;
    }
    else {
      if (arg == 0) {
        cmd = chr;
      }
      else if (arg == 1) {
        argv1[index] = chr;
        index++;
      }
      else if (arg == 2) {
        argv2[index] = chr;
        index++;
      }
    }
  }
  
  if (millis() > nextPID) {
    updatePID();
    nextPID += PID_INTERVAL;
  }
  
  if ((millis() - lastMotorCommand) > AUTO_STOP_INTERVAL) {
    setMotorSpeeds(0, 0, 0, 0);
    moving = 0;
  }
}

void resetCommand() {
  cmd = NULL;
  memset(argv1, 0, sizeof(argv1));
  memset(argv2, 0, sizeof(argv2));
  arg1 = 0;
  arg2 = 0;
  arg = 0;
  index = 0;
}

int runCommand() {
  arg1 = atol(argv1);
  arg2 = atol(argv2);
  
  switch(cmd) {
    case READ_ENCODERS:
      Serial.print(readEncoder(FRONT_LEFT));
      Serial.print(" ");
      Serial.print(readEncoder(FRONT_RIGHT));
      Serial.print(" ");
      Serial.print(readEncoder(REAR_LEFT));
      Serial.print(" ");
      Serial.println(readEncoder(REAR_RIGHT));
      break;
    case RESET_ENCODERS:
      resetEncoders();
      resetPID();
      Serial.println("OK");
      break;
    case MOTOR_SPEEDS:
      lastMotorCommand = millis();
      if (arg1 == 0 && arg2 == 0) {
        setMotorSpeeds(0, 0, 0, 0);
        resetPID();
        moving = 0;
      }
      else moving = 1;
      frontLeftPID.TargetTicksPerFrame = arg1;
      frontRightPID.TargetTicksPerFrame = arg2;
      rearLeftPID.TargetTicksPerFrame = arg1;
      rearRightPID.TargetTicksPerFrame = arg2;
      Serial.println("OK");
      break;
    default:
      Serial.println("Invalid Command");
      break;
  }
}