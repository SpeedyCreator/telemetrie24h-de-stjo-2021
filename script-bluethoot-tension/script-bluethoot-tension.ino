#include <Wire.h>
#include <SoftwareSerial.h> 

float tension;
SoftwareSerial HC06(7,8);  // pin7 Tx / pin8 Rx 

void setup()
{
  Serial.begin(9600);
  HC06.begin(9600);

}

void loop()

{

  tension = analogRead(1)/41.00;
  
  HC06.print(tension);
  HC06.print("*T");

  Serial.println(tension);
  delay(1000);
  
}
