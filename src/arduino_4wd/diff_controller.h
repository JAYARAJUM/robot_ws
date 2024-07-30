#ifndef DIFF_CONTROLLER_H
#define DIFF_CONTROLLER_H

typedef struct {
  double TargetTicksPerFrame;
  long Encoder;
  long PrevEnc;
  int PrevInput;
  int ITerm;
  long output;
} SetPointInfo;

SetPointInfo frontLeftPID, frontRightPID, rearLeftPID, rearRightPID;

int Kp = 20;
int Kd = 12;
int Ki = 0;
int Ko = 50;

unsigned char moving = 0;

void resetPID();
void updatePID();
void doPID(SetPointInfo * p);

#endif