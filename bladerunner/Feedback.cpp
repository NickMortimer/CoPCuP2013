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
  Created by Nick A. Mortimer, May 4, 2013.
  Released into the public domain.
*/
    
    Feedback::Feedback(){
      pinMode(LEDPIN, OUTPUT);
    }
    void setLedBrightness(int brightness){
    }
    void playTune(){
    }
