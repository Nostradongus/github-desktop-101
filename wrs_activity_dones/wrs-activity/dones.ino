
//wrs-activity
//fire-fighting robot
//last modified: July 29, 2021


//include library
#include "myLibrary.h"
//assign pin 2 as FLAME_PIN
#define FLAME_PIN 2
//assign pin 1 as NO_FIRE
#define NO_FIRE 1
//assign pin 0 as IS_FIRE
#define IS_FIRE 0


//setup
void setup() {
  //begin serial monitor
  Serial.begin (9600);
}


//loop
void loop() {
  //if FLAME_PIN is equals to NO_FIRE
  if (digitalRead (FLAME_PIN) == NO_FIRE) {
    //robot will move forward
    moveForward (3000);
  } 
  //if FLAME_PIN is not equals to NO_FIRE
  else {
    //robot will kill the fire
    blowFan (2000);
  }
}
