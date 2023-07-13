
void setup()
{
  pinMode(3,OUTPUT);
}

void loop()
{
    for(int i=0;i<=255;i=i+2)
    {
      
      analogWrite(3,i);
         delay(15);

    }
  for(int i=255;i>=1;i=i-2)
    {
      
      analogWrite(3,i);
        delay(15);

    }
          delay(250);


}