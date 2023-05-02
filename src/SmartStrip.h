#include "SendIRCommand.h"

struct Smart_Strip:Service::LightBulb
{
    int nBlinks;   
    SpanCharacteristic *power;

    Smart_Strip(int nBlinks) : Service::LightBulb(){       // constructor() method

    power=new Characteristic::On();                 
                                   
    this->nBlinks=nBlinks;                           // NEW! number of blinks                      
    
    Serial.print("  Blinks=");                       // NEW! add output message for number of blinks
    Serial.print(nBlinks);
    Serial.print("\n");

  } // end constructor

  boolean update(){                              // update() method

    // NEW! Instead of turning on or off the LED according to newValue, we blink it for
    // the number of times specified, and leave it in the off position when finished.
    // This line is deleted...
    
    // digitalWrite(ledPin,power->getNewVal());      

    // and is replaced by...

    if(power->getNewVal()){                       // check to ensure HomeKit is requesting we "turn on" this device (else ignore)


      SendIRCommand("OnOff");
      Serial.print("This is SmartStrip: OnOff");
      
    } // if newVal=true

    // Note that the delays above of 100ms and 250ms are for illustrative purposes only
    // (and so you can see the LED blink). In practice, if you were controlling an IR LED
    // or an RF transmitter, the whole signal would likely transmit in 10ms total.
    
    return(true);                               // return true
  
  } // update

  // NEW! Here we implement a very simple loop() method that checks to see if the power Characteristic
  // is "on" for at least 3 seconds.  If so, it resets the value to "off" (false).

  void loop(){

    if(power->getVal() && power->timeVal()>3000){   // check that power is true, and that time since last modification is greater than 3 seconds 
      LOG1("Resetting Blinking LED Control\n");     // log message  
      power->setVal(false);                         // set power to false
    }      
    
  } // loop
  
};