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

  temps = ValeurEntrer/4.092 ;

  ValeurFinal=(temps/10) ;

  Serial.println(ValeurFinal) ;

  delay(1000) ;

}
  
