/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 8
  #define LEFT_MOTOR_BACKWARD  11
  #define RIGHT_MOTOR_FORWARD  12
  #define LEFT_MOTOR_FORWARD   13
  #define RIGHT_MOTOR_ENABLE 9 
  #define LEFT_MOTOR_ENABLE 10
#endif

void initMotorController();
void setMotorSpeed(int i, double spd);
void setMotorSpeeds(double leftSpeed, double rightSpeed);
