/*
 * General Instructions:
 * (1) Supply the appropriate documentation.
 * (2) No need to touch the actual code, focus on documentation.
 * (3) As a hint, TODO statements are provided for you to know where documentation is needed.
 * (4) You may delete this after you are done.
 */


/**
 * File Name: wrs-activity.ino
 * 
 * Description: This code makes a fire fighting robot blow its fan and move forward.
 * 
 * Author: Ned Stark
 * 
 * Last Modified: July 29, 2021
 */

// Import the contents of "myLibrary.h"
#include "myLibrary.h"

// Flame sensor pin
#define FLAME_PIN 2

// Flame sensor value when there is NO FIRE
#define NO_FIRE 1

// Flame sensor value when there is FIRE
#define IS_FIRE 0

// Arduino setup function. Runs once when the code is started.
void setup() {
  // Initialize the Serial Monitor with baud 9600
  Serial.begin (9600);
}

// Arduino loop function. Runs forever when the code is started.
void loop() {
  // Use digitalRead (<pin>) to read the sensor's return value

  // If the sensor sees no fire
  if (digitalRead (FLAME_PIN) == NO_FIRE) {
    // Just keep moving forward
    moveForward (3000);
  // if the sensor sees a fire
  } else {
    // turn on the fan
    blowFan (2000);
  }
}
