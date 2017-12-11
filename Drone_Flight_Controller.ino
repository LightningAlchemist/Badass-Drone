#include "CurieTimerOne.h"
#include "CurieIMU.h"

int ax, ay, az;//Variables for raw accelerometer data.
int gx, gy, gz;//Variables for raw gyro data.
int Front_Right = 3;// Assigning Front Right motor to pwm~ pin 3.
int Front_Left = 5;// Assigning Front Left motor to pwm~ pin 5.
int Back_Right = 6;// Assigning Back Right motot to pwm~ pin 6.
int Back_Left = 9;//Assigning Back left motor to pwm~ pin 7.
float yaw_rate = 0;// Variable assigned to find degrees/sec.
float pitch_rate = 0;// Variable assigned to find degrees/sec.
float roll_rate = 0;// Variable assigned to find degrees/sec.
float yaw = 0; //Variable assigned to find orientation in degrees.
float pitch = 0;//Variable assigned to find orientation in degrees.
float roll = 0;//Variable assigned to find orientation in degrees.
float x_accel = 0;//Varable assigned to accellerometer.m/s^2
float y_accel = 0;//Varable assigned to accellerometer.m/s^2
float z_accel = 0;//Varable assigned to accellerometer.m/s^2
float x_veloc = 0;//Variable assigned to acceleration converted to velocity.
float y_veloc = 0;//Variable assigned to acceleration converted to velocity.
float z_veloc = 0;//Variable assigned to acceleration converted to velocity.
float x_disp = 0;//I don't think I need this.
float y_disp = 0;//I don't think I need this.
float z_disp = 0;//I don't think I need this.
float aX_a = 0, aX_b = 0, aY_a = 0, aY_b = 0, aZ_a = 0, aZ_b = 0;
float gX_a = 0, gX_b = 0, gY_a = 0, gY_b = 0, gZ_a = 0, gZ_b = 0;
int Blue = 13; //Assigning the pin 13 to the blue LED
int Red = 12;//Assigning the pin 12 to the red LED
int Green = 11; //Assigning the pin 11 to the green LED
int command = 0;//The order being carried out.
int prev_comm = 0;// The order carried out in the previous repetition of the loop
double delta_t;
float true_x;
float true_y;



void setup() {
  // put your setup code here, to run once:
pinMode(Blue, OUTPUT);
pinMode(Red, OUTPUT);
pinMode(Green,OUTPUT);
pinMode(Front_Right,OUTPUT);
pinMode(Front_Left, OUTPUT);
pinMode(Back_Right,OUTPUT);
pinMode(Back_Left,OUTPUT); //Assigning the pins as output as in outputting a voltage.


CurieIMU.begin();//Turn on inertial measurement unit.
  if(CurieIMU.begin())
    {
      flash_LED(Blue, 100, 5);// If it turns on the LED flashes blue
    }
  else
    {
      while(true)
      {
       flash_LED(Red, 100, 5); //If it doesn't turn on red light flashes.
      }
    }
calibrate();//Initialize calibrate sequence.
flash_LED(Green, 100, 5);//Once it has calibrated flash green.
CurieTimerOne.start(1); // read's time in microseconds
}

void loop() {
  delta_t = CurieTimerOne.rdRstTickCount()/1000000;
  read_Sensor_Data();//Duh
 
 //translate_sensor_data();
 //flight_navigation();

}
