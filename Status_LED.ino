void flash_LED(int color, int duration, int repetitions)//Takes color, duration of flashes, and how many times you want the light to blink.
{
  for(int i = 0; i < repetitions; i++)
  {
    digitalWrite(color, HIGH);
    delay(duration);
    digitalWrite(color,LOW);
    delay(duration);
   }
}
