#include <SoftwareSerial.h> 

int termor = A0;                       
int valeuranalog;

void setup() {
 
 Serial.begin(9600);
}

void loop() {
  
  valeuranalog = analogRead(termor);

  Serial.println(valeuranalog);
  delay(1000);
 
  }
