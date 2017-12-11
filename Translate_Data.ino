void Translate_Data()
{
  RiemannAcceleration();
  RiemannGyro();
  trueVeloc();
}



void RiemannAcceleration()
{
  aX_b = x_accel;//Stores the for use.
  aY_b = y_accel;
  aZ_b = z_accel;
x_veloc =(aX_b - aX_a)/(delta_t);//current acceleration from the current repetition of the loop minus the values of the previous repetition. 

y_veloc =(aY_b - aY_a)/(delta_t);

z_veloc =(aX_b - aX_a)/(delta_t);

aX_a = aX_b; // Stores the most current to be used in the repetition of the loop.
aY_a = aY_b;
aZ_a = aZ_b;

}

void RiemannGyro(){
  
gX_b = yaw_rate;//Stores the values for use.
gY_b = pitch_rate;
gZ_b= roll_rate; 

yaw = (gX_b - gX_a)/(delta_t);//current acceleration from the current repetition of the loop minus the values of the previous repetition. 
pitch = (gY_b - gY_a)/(delta_t);
roll = (gZ_b - gZ_a)/(delta_t);


gX_a = gX_b; // Stores the most current to be used in the repetition of the loop.
gY_a = gY_b;
gZ_a = gZ_b;

}

void trueVeloc() { //gets real value of x and y 
  trueX = cos(pitch)*y_veloc +  cos(90-pitch)*y_veloc ; 
  trueY= cos(roll)*z_veloc +  cos(90-roll)*z_veloc;
}

