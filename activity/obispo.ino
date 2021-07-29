
/*
File name: obispo.ino
Desctiption: [Fire-fighting robot] tests if sensor on FLAME_PIN is working properly, see serial monitor for results. Needs 'obispoLibrary.h' in the same folder
Author: Lance Obispo
Last Modified: July 29, 2021 5PM
*/

// TODO: In-Line documentation
#include "obispoLibrary.h" //includes "obispoLibrary.h" which houses all functions used
#define FLAME_PIN 2 //FLAME_PIN is the pin number of the flame sensor, declared as 2
#define NO_FIRE 1 //Declares NO_FIRE as boolean 1 or true
#define IS_FIRE 0 //Declares IS_FIRE as boolean 0 or false; both NO_FIRE and IS_FIRE is used in void loop

//Initializes the serial monitor at frequency 9600, called once
void setup() {
  //Initializes Serial Monitor at 9600 frequency, note that remote serial monitor is set to the same frequency
  Serial.begin (9600);
}

//Core code, receives input from FLAME_PIN and prints to serial monitor; loops endlessly
void loop() {
  //Calls function 'moveForward' with specified parameter 3000 when FLAME_PIN returns true; else, calls function 'blowFan' with specified parameter 2000
  if (digitalRead (FLAME_PIN) == NO_FIRE) {
    moveForward (3000);
  } else {
    blowFan (2000);
  }
}
