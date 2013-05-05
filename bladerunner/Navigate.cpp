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

#include "Arduino.h"
#include "Navigate.h"
#include "TinyGPS.h"
// initalise the class
    Navigate::Navigate(){
      lat =0;
      lon =0;
       gpsSerial.begin(9600);
    }
    float Navigate::latitude(){
      return ((float)lat/100000);      
    }
    float Navigate::longitude(){
      return ((float)lon/100000);      
    }
    void Navigate::addwaypoint(int wayPointNumber,float wayPointLat, float wayPointLon){
    }
    void Navigate::setCurrentWayPoint(int wayPointNumber){
    }
    void Navigate::bearing(){
    }
    void Navigate::distance(){
    }
    void Navigate::updatePosition(){
        while (gpsSerial.available()) {
          int c = gpsSerial.read();
          if (gps.encode(c))  {
           // process new gps info here
           // retrieves +/- lat/long in 100000ths of a degree
            gps.get_position(&lat, &lon, &fix_age);

           }
        } 
    }
