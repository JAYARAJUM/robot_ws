#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int m1, int m2, int m3, int m4);

#endif