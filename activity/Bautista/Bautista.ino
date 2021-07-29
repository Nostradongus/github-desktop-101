/*
 * General Instructions:
 * (1) Supply the appropriate documentation.
 * (2) No need to touch the actual code, focus on documentation.
 * (3) As a hint, TODO statements are provided for you to know where documentation is needed.
 * (4) You may delete this after you are done.
 */

// TODO: Insert Source File Level documentation

// TODO: In-Line documentation
#include "Bautista.h"
#define FLAME_PIN 2
#define NO_FIRE 1
#define IS_FIRE 0

// TODO: Function-level documentation
void setup() {
  // TODO: In-Line documentation
  Serial.begin (9600);
}

// TODO: Function-level documentation
void loop() {
  // TODO: In-Line documentation
  if (digitalRead (FLAME_PIN) == NO_FIRE) {
    moveForward (3000);
  } else {
    blowFan (2000);
  }
}
