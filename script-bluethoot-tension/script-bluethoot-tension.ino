#include <Wire.h>
#include <SoftwareSerial.h> 

int ValeurEntrer;
float ValeurVolt;
int ValeurPourcent;
SoftwareSerial HC06(7,8);  // pin7 Tx / pin8 Rx 

void setup()
{
  Serial.begin(9600);
  Serial.println ("tension en Volt(V):") ;
  HC06.begin(9600);

}

void loop()

{

  float temps ;

  ValeurEntrer=analogRead(1) ;

  temps = ValeurEntrer/3.98 ;

  ValeurVolt=(temps/10) ;

  ValeurPourcent= ValeurVolt*100/8.17;
  
  Serial.println(ValeurVolt);
  
  HC06.print("*V");
  HC06.print(ValeurVolt);

  HC06.print("*P");
  HC06.print(ValeurPourcent);

  

  delay(1000) ;

}
