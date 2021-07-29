/* 
@param: int delayAmt : int and I don't have any idea what it's for, probably for use with a delay(); function
prints "Fire? Swoosh! Swoosh!" to the serial monitor;
*/
void blowFan (int delayAmt) {
  // prints "Fire? Swoosh! Swoosh!" to the serial monitor
  Serial.println ("Fire? Swoosh! Swoosh!");
}

// @param: delayAmt : int and it's a mystery what it does, probably for use with a delay(); function
void moveForward (int delayAmt) {
  //Prints "No fire? Moving forward!" to the serial monitor
  Serial.println ("No fire? Moving forward!");
}
