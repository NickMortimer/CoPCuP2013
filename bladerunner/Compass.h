/*
  Compass.h - Library interfacing to I2C flux gate compass.
  Compass Module - HMC6352
  https://www.sparkfun.com/products/7915
  Created by Nick A. Mortimer, May 4, 2013.
  Released into the public domain.
  
  Chip commands
w (77) EEPROM Address Data Write to EEPROM
r (72) EEPROM Address Data Read from EEPROM
G (47) RAMAddress Data Write to RAM Register
g (67) RAM Address Data Read from RAM Register
S (53) Enter Sleep Mode (Sleep)
W (57) Exit Sleep Mode (Wakeup)
O (4F) Update Bridge Offsets (S/R Now)
C (43) Enter User Calibration Mode
E (45) Exit User Calibration Mode
L (4C) Save Op Mode to EEPROM
A (41) MSB Data LSB Data Get Data. Compensate and Calculate New Heading
See Data Sheet for full description
  http://www.sparkfun.com/datasheets/Components/HMC6352.pdf
*/
#ifndef Compass_h
#define Compass_h
#include "Arduino.h"
class Compass
{
  public:
    Compass();
    int readHeading();
    void startCalibration();
    void exitCalibration();
   private:
    int HMC6352SlaveAddress;

};
#endif
