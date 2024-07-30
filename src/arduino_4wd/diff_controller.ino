#include "diff_controller.h"
#include "encoder_driver.h"
#include "motor_driver.h"

void resetPID(){
   frontLeftPID.TargetTicksPerFrame = 0.0;
   frontLeftPID.Encoder = readEncoder(FRONT_LEFT);
   frontLeftPID.PrevEnc = frontLeftPID.Encoder;
   frontLeftPID.output = 0;
   frontLeftPID.PrevInput = 0;
   frontLeftPID.ITerm = 0;

   frontRightPID.TargetTicksPerFrame = 0.0;
   frontRightPID.Encoder = readEncoder(FRONT_RIGHT);
   frontRightPID.PrevEnc = frontRightPID.Encoder;
   frontRightPID.output = 0;
   frontRightPID.PrevInput = 0;
   frontRightPID.ITerm = 0;

   rearLeftPID.TargetTicksPerFrame = 0.0;
   rearLeftPID.Encoder = readEncoder(REAR_LEFT);
   rearLeftPID.PrevEnc = rearLeftPID.Encoder;
   rearLeftPID.output = 0;
   rearLeftPID.PrevInput = 0;
   rearLeftPID.ITerm = 0;

   rearRightPID.TargetTicksPerFrame = 0.0;
   rearRightPID.Encoder = readEncoder(REAR_RIGHT);
   rearRightPID.PrevEnc = rearRightPID.Encoder;
   rearRightPID.output = 0;
   rearRightPID.PrevInput = 0;
   rearRightPID.ITerm = 0;
}

void doPID(SetPointInfo * p) {
  long Perror;
  long output;
  int input;

  input = p->Encoder - p->PrevEnc;
  Perror = p->TargetTicksPerFrame - input;

  output = (Kp * Perror - Kd * (input - p->PrevInput) + p->ITerm) / Ko;
  p->PrevEnc = p->Encoder;

  output += p->output;
  if (output >= MAX_PWM)
    output = MAX_PWM;
  else if (output <= -MAX_PWM)
    output = -MAX_PWM;
  else
    p->ITerm += Ki * Perror;

  p->output = output;
  p->PrevInput = input;
}

void updatePID() {
  frontLeftPID.Encoder = readEncoder(FRONT_LEFT);
  frontRightPID.Encoder = readEncoder(FRONT_RIGHT);
  rearLeftPID.Encoder = readEncoder(REAR_LEFT);
  rearRightPID.Encoder = readEncoder(REAR_RIGHT);
  
  if (!moving){
    if (frontLeftPID.PrevInput != 0 || frontRightPID.PrevInput != 0 ||
        rearLeftPID.PrevInput != 0 || rearRightPID.PrevInput != 0) resetPID();
    return;
  }

  doPID(&frontLeftPID);
  doPID(&frontRightPID);
  doPID(&rearLeftPID);
  doPID(&rearRightPID);

  setMotorSpeeds(frontLeftPID.output, frontRightPID.output, rearLeftPID.output, rearRightPID.output);
}