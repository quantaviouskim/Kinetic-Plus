#include "DueCANLayer.h"
#include <math.h>

#ifndef _DRIVE_
#define _DRIVE_

class Drive
{
  private:
    double v; // Current velocity of yaw motors, degrees/second
    double a; // Current acceleration of drive motors
    double vMax;   // Max angular velocity of yaw motor, in motor frame, degrees/second
    double aMax;   // Max angular acceleration of yaw motor, in motor frame, degrees/second^2
    double dRatio; // scaling factor from physical rad/sec to erpms
    double tInner;
    double MaxDelRPM;//maximum change per loop
    byte cTxData1[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    int len;
    int mot;
  public:
    Drive(double vMax, double aMax, double dRatio, double tInner, int len, int mot);
    void slewVel(double vel, int ch, int rcLost);
    void setVel(double vel, int ch, int rcLost);
    void setAcc(double acc, int ch, int rcLost);
    double getVel();
}; 


#endif
