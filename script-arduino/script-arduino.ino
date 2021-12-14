#include <Wire.h>
int ValeurEntrer;
float ValeurFinal;

void setup()
{
  Serial.begin(9600);
  Serial.println ("tension en Volt(V):") ;

}

void loop()

{

  float temps ;

  ValeurEntrer=analogRead(1) ;

  temps = ValeurEntrer/3.98 ;

  ValeurFinal=(temps/10) ;

  Serial.println(ValeurFinal) ;

  delay(1000) ;

}
  
