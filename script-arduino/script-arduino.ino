#include <Wire.h>
int vall11;
float val2;

void setup()
{
  Serial.begin(9600);
  Serial.println("Emartee.com");
  Serial.println ("tension:") ;
  Serial.print("V") ;

}

void loop()

{

  float temp ;

  vall11=analogRead(1) ;

  temp = vall11/4.092 ;

  val2=(temp/10) ;

  Serial.println(val2) ;

  delay(1000) ;

}
  
