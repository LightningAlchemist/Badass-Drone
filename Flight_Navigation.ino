void Flight_Navigation(){
int switch_state = commands();
switch(switch_state)){ 
  case 1:
  go_up();
  break;
  
  case 2:
  go_down();
  break;
  
  case 3:
  Right();
  break;
  
  case 4:
  Left();
  break;
  
  case 5:
  Forward();
  break;
  
  case 6:
  Backword();
  break;
  
  case 7:
  Hovered();
  break;

  case 8:
  FrontRight();
  break;

  case 9:
  FrontLeft();
  break;

  case 10:
  BackRight;
  break;

  case 11:
  BackLeft;
  break;
yawright();
break;
  case 13:
  yawleft();
  break;
}
   analogWrite(Front_Right, frp);
  analogWrite(Front_Left, flp);
  analogWrite(Back_Right,brp);
  analogWrite(Back_Left,blp);
  
}
int commands()
{
  command = control;
  if ( command == 0){
      counter ++
      if(counter < 10)
        {
        command = prev_comm;
        }
        else
        {
          command = 7;
         
        }
    }
    else 
  {
    counter = 0;
  }  
  
  prev_comm = command; 
  return command; 
  
}
void go_up()
{
 frc = 2;
 flc = 2;
 brc = 2;
 blc = 2;

 
 }
 if (pitch < 0){ 
  frc - 2;
  flc - 2;
  brc + 2;
  blc + 2;
 }
 else if (pitch > 0){
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 else
 {
  
 }
 if(roll < 0){
  flc - 2;
  blc - 2;
  frc + 2;
  brc + 2;
 }
 else if(roll > 0)
 {
  flc + 2;
  blc + 2;
  frc - 2;
  brc - 2;
 }
 else
 {
  
 }
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}

void go_down(){
  frc = 2;
  flc = 2;
  brc = 2;
  brc = 2;
  if (pitch < 0){
    frc - 2;
  flc - 2;
  brc + 2;
  blc + 2;
  }
  else if (pitch > 0){
    frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
  }
  if ( roll < 0){
      flc - 2;
  blc - 2;
  frc + 2;
  brc + 2;
  }
  else if ( roll < 0){
     flc + 2;
  blc + 2;
  frc - 2;
  brc - 2;
  }
  
  frp = frp - frc;
  flp = flp - flc;
  brp = brp - brc;
  blp = blp - blp;
}


  

void Right(){
  frc = 0;
 flc = 0;
 brc = 0;
 blc = 0;
 if (pitch < 0)
 {
  frc - 2;
  flc - 2
  blc + 2;
  brc +2;
 }
 else if (pitch > 0)
 {
  brc - 2
  blc - 2;
  flc + 2;
  frc + 2
 }
 else
 {

 }
 if(roll < 10) // going to left
 {
  frc + 2;
  brc + 2;
  flc - 2;
  blc - 2;
  

 }
 else if(roll > 10)  // going to right
 {
  flc + 2;
  blc + 2;
  frc - 2;
  brc - 2;

 }
 else 
 {
   
 }
 
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
 
}

void Left(){
   frc = 0;
 flc = 0;
 brc = 0;
 blc = 0;
 if ( pitch < 0)
 {
  frc - 2;
  flc - 2;
  brc + 2;
  blc + 2;
 }
 else if (pitch > 0)
 {
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 if ( roll < 10){
  frc + 2;
  brc + 2;
  flc - 2;
  blc - 2;
 }

 else if ( roll > 10)
 {
  flc + 2;
  blc + 2;
  frc - 2;
  brc - 2;
 }
 
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}

void Forward(){
   frc = 0;
 flc = 0;
 brc = 0;
 blc = 0;
 if ( pitch > 10){
  frc - 2;
  flc - 2;
  brc + 2;
  blc + 2;
 }
 else if (pitch < 10){
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
  
 }
 if (roll < 0){
  frc + 2;
  flc - 2;
  brc + 2;
  blc - 2;
 
 }
 else if ( roll > 0){
  frc - 2;
  flc + 2;
  brc - 2;
  blc + 2;
 }
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}
void Backward(){
   frc = 0;
 flc = 0;
 brc = 0;
 blc = 0;
 if ( pitch < 10){
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 else if ( pitch > 10){
  frc - 2;
  flc - 2;
  brc - 2;
  blc - 2;
 }
 if ( roll < 0){
  frc + 2;
  flc - 2;
  brc + 2;
  blc - 2;
 }
 else if (roll > 0){
  frc - 2;
  flc + 2;
  brc - 2;
  blc + 2;
 }
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}
void Hovered(){
  frc = 0;
 flc = 0;
 brc = 0;
 blc = 0;
 if (pitch < 10){
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 else if (pitch > 10){
  frc - 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 if ( roll < 10){
 frc + 2;
 flc - 2;
 brc + 2;
 blc - 2;
 }
 else if ( roll > 10){
  frc - 2;
  flc + 2;
  brc - 2;
  blc + 2;
 }

 frp = frc;
 flp = flc;
 brp = brc;
 blp = blc;
 
}

void FrontRight(){
  frc = 0;
 flc = 0;
 brc = 0;
 blc = ;
 if ( pitch < 10){
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 else if ( pitch > 10){
  frc - 2;
  flc - 2;
  brc + 2;
  blc + 2;
 }
 if ( roll < 10){
  frc + 2;
  flc - 2;
  brc + 2;
  blc - 2;
 }
 else if ( roll > 10){
  frc - 2;
  flc + 2;
  brc - 2;
  blc + 2;
  
 }
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}
void FrontLeft(){
    frc = ;
 flc = 0;
 brc = 0;
 blc = 0;
 if ( pitch < 10) {
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 else if ( pich > 10){
  frc - 2;
  flc - 2;
  brc + 2;
  blc + 2;
 }
 if ( roll < 10 ){
  frc + 2;
  flc - 2;
  brc + 2;
  blc - 2;
 }
 else if (roll > 10){
  frc - 2;
  flc + 2;
  brc - 2;
  blc + 2;
 }
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}
void BackRight(){
    frc = 0;
 flc = 0;
 brc = 0;
 blc = 0;
 if ( pitch < 10 ){
  frc - 2;
  flc - 2;
  brc + 2;
  blc - 2;
  
 }
 else if ( pitch > 10){
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 if (roll< 10){
  frc + 2;
  flc - 2;
  brc + 2;
  blc - 2;
 }
 else if ( roll> 10){
  frc - 2;
  flc + 2;
  brc - 2;
  blc + 2;
 }
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}
void BackLeft(){
 frc = 0;
 flc = 0;
 brc = 0;
 blc = 0;
 if ( pitch < 10){
  frc + 2;
  flc + 2;
  brc - 2;
  blc - 2;
 }
 else if (pich > 10){
  frc - 2;
  flc - 2;
  brc + 2;
  blc + 2;
 }
 if (roll< 10){
  frc + 2;
  flc - 2;
  brc + 2;
  blc - 2;
 }
 else if ( roll > 10){
  frc - 2;
  flc + 2;
  brc - 2;
  blc + 2;
 }
 frp = frp + frc;
 flp = frp + flc;
 brp = brp + brc;
 blp = blp + blc;
}
