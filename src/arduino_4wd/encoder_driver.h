#ifndef ENCODER_DRIVER_H
#define ENCODER_DRIVER_H

#define FRONT_LEFT_ENC_A 2
#define FRONT_LEFT_ENC_B 3
#define FRONT_RIGHT_ENC_A 18
#define FRONT_RIGHT_ENC_B 19
#define REAR_LEFT_ENC_A 20
#define REAR_LEFT_ENC_B 21
#define REAR_RIGHT_ENC_A 22
#define REAR_RIGHT_ENC_B 23

void initEncoders();
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

#endif