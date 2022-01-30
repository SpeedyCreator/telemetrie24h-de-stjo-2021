#include <Wire.h>
#include <SoftwareSerial.h> 

float tension;
int ThermistorPin = A0;
unsigned long last_time=0;
int update_interval=100;
char data_in;
int Vo;
float R1 = 10000;
float logR2, R2, T, Tc;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
SoftwareSerial HC06(7,8);  // pin7 Tx / pin8 Rx 

void setup()
{
  Serial.begin(9600);
  HC06.begin(9600);

}

void loop()

{
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  Tc = T - 273.15;
  

  tension = analogRead(1)/41.00;

  HC06.print(tension);
  HC06.print("*T");
  Serial.println(tension);

  HC06.print(Tc);
  HC06.print("*Z");
  delay(1000);
  
}
