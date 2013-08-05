
void setup()
{
  //initialize pins 11,12,13
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
  digitalWrite(11,HIGH);
  tone(3,200, 1000);
  delay(2000);
  digitalWrite(11,LOW);
  delay(0);
  digitalWrite(12,HIGH);
   tone(3,200, 1000);
  delay(2000);
  digitalWrite(12,LOW);
  delay(0);
  digitalWrite(13,HIGH);
   tone(3,400, 1000);
  delay(2000);
  digitalWrite(13,LOW);
  delay(0);
}
  
