#include <SoftwareSerial.h>                          
SoftwareSerial HC06(7,8);  // pin7 Tx / pin8 Rx
int Thermo = A0 ;
int ValeurThermo;
int R1 = 10000 ;
float valeurFinal ;

void setup() {
    Serial.begin(9600);
    HC06.begin(9600);
}

void loop() {
    ValeurThermo = analogRead(Thermo);
    valeurFinal = (R1+ValeurThermo*5) / ValeurThermo ;
    Serial.println(valeurFinal);
    delay(1000);
    //Serial.print("t");
    //Serial.println();
}
