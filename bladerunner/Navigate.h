/*
  Navigate.h - Library for navigating between points
  You will need to install TinyGPS to your development enviroment
  http://arduiniana.org/libraries/tinygps/
  Please look at 
  http://arduino.cc/en/Guide/Libraries
  for information on installing the Libraries
  We are using 
  https://www.sparkfun.com/products/11058
  
  Created by Nick A. Mortimer, May 4, 2013.
  Released into the public domain.
*/

#ifndef Navigate_h
#define Navigate_h
#define RXPIN 10
#define TXPIN 11

#include <SoftwareSerial.h>
#include "Arduino.h"
#include "TinyGPS.h"
class Navigate
{
  public:
    Navigate();
    float latitude();
    float longitude();
    void addwaypoint(int wayPointNumber,float wayPointLat, float wayPointLon);
    void setCurrentWayPoint(int wayPointNumber);
    void bearing();
    void distance();
    void updatePosition();
   private:
   TinyGPS gps;
    float wayPointLats[10];
    float wayPointLongs[10];
    int CurrentWaypoint;
    int numberOfWayPoints;
    long int lat,lon;
     long unsigned fix_age;
};
#endif
