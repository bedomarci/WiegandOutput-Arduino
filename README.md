# WiegandOutput-Arduino

Wiegand output library for any bit format (standard 26 and 34 bits or custom) for arduino.

# Description

This library allow arduino hardware send a wiegand data using two arduino IO (Data0 and Data1) of any bit length (max 64).

# Tested hardwares

Arduino Uno
Arduino Nano



# How to use

1. Include de library wiegandOutput.h
2. Create a WiegandOut object: WiegandOut wiegandOut(8,9);  -> Wiegand object initialized with Data0 at pin 8 and Data 1 at pin 9
3. Use the method send to send your card number.

# Simple example

```
#include "Arduino.h"
#include "wiegandOutput.h"

WiegandOut wiegandOut(8,9);

long count = 0;

void setup() {
}

void loop(){
wiegandOut.send(count,26,true); // Send 26 bits with facility code
delay(1000);
wiegandOut.send(count,34,true);   // Send 34 bits with facility code
delay(1000);
wiegandOut.send(count,40,true);   // Send 40 bits with facility code
delay(1000);
wiegandOut.send(count,40,false); // Send 26 bits without facility code
delay(1000);
wiegandOut.send(count,34,false); // Send 34 bits without facility code
delay(1000);
wiegandOut.send(count,40,false); // Send 40 bits without facility code
delay(1000);
count++;
}
```
