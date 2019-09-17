void setup()
{
  pinMode(2,OUTPUT);
    pinMode(8,OUTPUT);

}

void loop()
{
  int reading=digitalRead(2);
  if(reading=LOW)
  {
    digitalWrite(2,HIGH);
  }
  else
  {digitalWrite(2,LOW);
    }

}