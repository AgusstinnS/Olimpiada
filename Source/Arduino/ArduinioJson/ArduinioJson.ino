
#include <ArduinoJson.h>
 void setup(){
  Serial.begin(9600);
    

 }
 void loop(){
    if(Serial.read() == 'j'){
DynamicJsonBuffer jBuffer;
    JsonObject& root = jBuffer.createObject();

    root["Numero Boya"] = random(1,3);

    int Competidor = random(1,3);
    int CantidadVueltas = 0;
    root["Competidor"] = Competidor ;
    root["CantidadVueltas"] = CantidadVueltas++ ;

    root.prettyPrintTo(Serial);
    Serial.println();
delay(500);
  
 }
 }
