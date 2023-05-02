
#define DECODE_NEC          // Includes Apple and Onkyo



#include <Arduino.h>

#include "IRCommands.h" // Include all IR commands
#include "PinDefinitionsAndMore.h"
#include <IRremote.hpp>
#include "HomeSpan.h"
#include "SmartStrip.h"

int sensorPin = 34;
int sensorValue = 0;


void setup() {
    Serial.begin(115200);
    pinMode(sensorPin, INPUT);
    pinMode(IR_SEND_PIN,OUTPUT);
    pinMode(BUILTIN_LED,OUTPUT);
    // Just to know which program is running on my Arduino
    Serial.println(IR_SEND_PIN);
    IrSender.begin(ENABLE_LED_FEEDBACK);

    //Serial.println("testing");
    //Serial.setTimeout(5000);
    homeSpan.setStatusPin(2);
    homeSpan.begin(Category::Bridges, "Smart Strip");

    new SpanAccessory();
      new Service::AccessoryInformation();
        new Characteristic::Identify();

    new SpanAccessory();
      new Service::AccessoryInformation();
        new Characteristic::Identify();
        new Characteristic::Name("Smart Strip");
      new Smart_Strip(1);



    homeSpan.autoPoll();
}

void loop() {
    //input = Serial.readStringUntil('#');
    //Serial.println("The input is: " + input);
    //SendIRCommand(input);
    //sensorValue = analogRead(sensorPin);
    //Serial.println(sensorValue);
}
