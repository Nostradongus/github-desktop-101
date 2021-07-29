/*
 * File Name: BranchPhilip.ino
 * 
 * Description: 
 * Hi this is Philip's Branch
 *
 * Author: Hi I'm Philip
 * 
 * Last Modified: July 29, 2021
 
 */
 
// Import contents of myLibrary.h
#include "PhilipLibrary.h"

// Flame Sensor Pin
#define FLAME_PIN 2

// Flame Sensor return value when fire was not found.
#define NO_FIRE 1

// Flame Sensor return value when fire was found.
#define IS_FIRE 0


// The function void setup, setups the initial code of the program
void setup() {

/* 
 *   This initializes the serial monitor.
 */
  Serial.begin (9600);
}


 // The function void loop, loops the program located inside the parameters and stops when the Arduino board is stopped.
void loop() {
 /* 
  *  This condition statement checks if there is fire present or if the value of
  *  the flame sensor == 2 or not
  */
  // If the sensor senses no fire, the function moveForward will be used.
  if (digitalRead (FLAME_PIN) == NO_FIRE) {
    moveForward (3000);

  // If the sensor senses a fire, the function blowFan will be used.
  } else {
    blowFan (2000);
  }
}
