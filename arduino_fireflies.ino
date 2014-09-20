/*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

int led = 3;           // the pin that the LED is attached to
int brightness = 0;
int speedOn = 20;
int timeOn = 600;      // duration that LED remains on
int speedOff = 10;
int timeOffMin = 2000;    // duration that LED remains off
int timeOffMax = 5000;    // duration that LED remains off
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare LED pin to be an output:
  pinMode(led, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  {

  for ( brightness = 0; brightness < 255; brightness += speedOn ) {
    // set the brightness of LED pin:
    analogWrite(led, brightness);    

    // wait for 30 milliseconds to see the dimming effect    
    delay(10);
  }

  delay(timeOn);

  for ( brightness = 255; brightness > 0; brightness -= speedOff ) {
    // set the brightness of LED pin:
    analogWrite(led, brightness);    

    // wait for 30 milliseconds to see the dimming effect    
    delay(10);
  }

  delay(random(timeOffMin, timeOffMax));
}
