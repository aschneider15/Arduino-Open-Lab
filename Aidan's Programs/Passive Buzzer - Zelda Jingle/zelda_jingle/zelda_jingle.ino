//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_G6, NOTE_FS6, NOTE_DS6, NOTE_A5, NOTE_GS5, NOTE_E6, NOTE_GS6, NOTE_C7};
int duration = 160;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
    delay(160);
  }
   
  // restart after two seconds 
  delay(4*duration);
}
