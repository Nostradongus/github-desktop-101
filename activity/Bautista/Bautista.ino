/*
 * File Name: Bautista.ino
 * 
 * Description: 
 * Test documentation
 * 
 * Author: Fatima Bautista
 * 
 * Last Modified: July 29, 2021
 */

// Imports of "myLibrary.h"
#include "Bautista.h"

// Fuctions as the pin for the flame sensor
#define FLAME_PIN 2 

// Flame Sensor return value when there is no fire
#define NO_FIRE 1 

// Flame Sensor return value when there is fire
#define IS_FIRE 0 

// This function setups the initial code of the program
void setup() {
/*
 * Initializes the Serial Monitor
 */
  Serial.begin (9600); //makes the serial monitor run
}

//This function loops the program inside the parameter
void loop() { 
/*
 * This condition statement checks if there is fire or not
 */

 // if the Flame Sensor doesn't detect fire, the program will "moveForward"
  if (digitalRead (FLAME_PIN) == NO_FIRE) { 
    moveForward (3000); 

 // if the Flame Sensor detects fire, the program will use the "blowfan" function
  } else {
    blowFan (2000);
  }
}
