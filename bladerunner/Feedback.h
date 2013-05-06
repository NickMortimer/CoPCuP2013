  /*
  Feedback.h - Library for providing feedback to users
  There are two main forms of feedback on our boards
  LED and Sound
  
  for sound output checkout
  http://arduino.cc/en/Reference/Tone
  LED control
  http://arduino.cc/en/Tutorial/Fade
  How about a Geiger-counter sound?
  http://www.instructables.com/id/How-To-Make-A-Fake-Geiger-Counter/
  Or some sound effects

  http://www.cs.au.dk/~dsound/DigitalAudio.dir/week12/ArduinoSound/index.html
  
  Or play some music  
  http://www.arduino.cc/en/Tutorial/PlayMelody
  http://www.arduino.cc/en/Tutorial/Melody
  
  Our amplifier
  https://www.sparkfun.com/products/11044
  https://www.sparkfun.com/tutorials/392
  
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
