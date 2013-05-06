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

#include "Arduino.h"
#include "Compass.h"

//All this does is read the heading from HMC6352 and spit it out via serial


#include <Wire.h>

 Compass::Compass()
{
   HMC6352SlaveAddress = 0x42 >> 1;
}

// read the compass heading 
// returns -1 is somthing is wrong (e.g. compass does not answer)
int Compass::readHeading()
{
  int reading =0;
   Wire.begin(); 
  // step 1: instruct sensor to read echoes 
  Wire.beginTransmission(HMC6352SlaveAddress);
  Wire.write('A');              // The "Get Data" command
  Wire.endTransmission();
  // step 2: wait for readings to happen 
  delay(10); // datasheet suggests at least 6000 microseconds 
  // step 3: request reading from sensor 
  Wire.requestFrom(HMC6352SlaveAddress, 2); // request 2 bytes from slave device #33 
  // step 4: receive reading from sensor 
  if (2 <= Wire.available()) // if two bytes were received 
  { 
    reading = Wire.read();  // receive high byte (overwrites previous reading) 
    reading = reading << 8; // shift high byte to be high 8 bits 
    reading += Wire.read(); // receive low byte as lower 8 bits 
    reading /= 10;
    return(reading); // print the reading
  } else
    return(-1);
}

void Compass::startCalibration() 
{
  // send the 'C' command
}

void Compass::exitCalibration()
{
  // send the 'E' commend
}
