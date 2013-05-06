#include <Wire.h>
#include "TinyGPS.h"
#include <SoftwareSerial.h>
#include "Compass.h"
#include "Navigate.h"
#include "Feedback.h"

// http://playground.arduino.cc/Code/TextFinder

  Compass compass;


void setup()
{
  Serial.begin(9600);
  

}

void loop()
{
  int heading = 0;
  heading = compass.readHeading();
  Serial.print(heading);
  delay(300);
  
}
