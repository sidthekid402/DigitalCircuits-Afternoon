void setup()
{
  pinMode(13,OUTPUT); //This allows PIN 13 to source a lot of electricity (a lot of amps)

}


void loop()
{
  digitalWrite(13,HIGH); // Makes PIN 13 High Voltage (5 volts)
  delay(10); //This keeps your Arduino from bricking
}
