void calibrate()
{
  CurieIMU.autoCalibrateGyroOffset();                     //Auto calibrate assumes that the board is flat on the ground and the offsets are assumed from there.
  CurieIMU.autoCalibrateAccelerometerOffset(X_AXIS, 0);   
  CurieIMU.autoCalibrateAccelerometerOffset(Y_AXIS, 0);
  CurieIMU.autoCalibrateAccelerometerOffset(Z_AXIS, 1);   // Account for gravity. 1 = 1g
  CurieIMU.setGyroRange(125);                             //Assumes that the drone won't exceed 125 degrees per secons
  CurieIMU.setAccelerometerRange(2);                      //Assuming the drone won't feel accelerations in excess of 2gs
  
}
void read_Sensor_Data()
{
  CurieIMU.readMotionSensor(ax, ay, az, gx, gy, gz);//Read the raw data.
  yaw_rate = (gx/32768.9)*CurieIMU.getGyroRange(); //Gets the data in degrees/ sec.
  pitch_rate = (gy/32768.9)*CurieIMU.getGyroRange();//Gets the data in degrees/ sec.
  roll_rate = (gz/32768.9)*CurieIMU.getGyroRange();//Gets the data in degrees/ sec.
  x_accel = (ax/32768.0)*CurieIMU.getAccelerometerRange(); //Gets the data in m/s^2.
  y_accel = (ay/32768.0)*CurieIMU.getAccelerometerRange();//Gets the data in m/s^2.
  z_accel = (az/32768.0)*CurieIMU.getAccelerometerRange();//Gets the data in m/s^2.
}

