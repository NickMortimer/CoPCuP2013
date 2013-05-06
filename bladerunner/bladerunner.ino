#include <Wire.h>
#include "TinyGPS.h"
#include <SoftwareSerial.h>
#include "Compass.h"
#include "Navigate.h"
#include "Feedback.h"
// CoP Cup hands on day
// Some info on the Uno board
//http://arduino.cc/en/Main/arduinoBoardUno
// Some info on text finder that could be usefull?
// http://playground.arduino.cc/Code/TextFinder

  Compass compass;

SoftwareSerial gpsSerial(RXPIN, TXPIN);

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
