
#include <Servo.h> 

Servo servz;

int command = 0;


void setup()
{
  servz.attach(9);

  Serial.begin(9600);  

}

void loop()
{

  if( Serial.available() ) 
  {
      command = Serial.parseInt();
      if (command  == 1 )
      {
      
      }
      if (command == 0)
      {
      
      }
  }
  delay(10);

}

void scanUp(int theBegin, int theEnd, int slowness)
{
   for ( int i = theBegin ; i < theEnd; i++)
      {
        servs.write(i);
        delay(slowness);  
      } 
}

void scanDown(int theBegin, int theEnd, int slowness)
{
   for ( int i = theBegin ; i > theEnd; i--)
      {
        servs.write(i);
        delay(slowness);  
      } 
}
