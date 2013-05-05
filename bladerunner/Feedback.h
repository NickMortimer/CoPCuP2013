/*
  Feedback.h - Library for providing feedback to users
  There are two main forms of feedback on our boards
  LED and Sound
  
  for sound output checkout
  http://arduino.cc/en/Reference/Tone
  LED control
  http://arduino.cc/en/Tutorial/Fade
  
  Created by Nick A. Mortimer, May 4, 2013.
  Released into the public domain.
*/

#ifndef Feedback_h
#define Feedback_h
#define LEDPIN 9
#include "Arduino.h"
class Feedback
{
  public:
    Feedback();
    void setLedBrightness(int brightness);
    void playTune();
    void playTone();
   private:
};
#endif
