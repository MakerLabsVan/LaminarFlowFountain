  /* 
   *  The following code engages the cutter for the laminar flow  
   *  founatin when the toggle switch is in the ON position.
   *  Working - 
   *  When the switch is in the ON position, the if condition calls the move function
   *  The move function makes the cutter arm sweep a certain number of steps 
   *  Once finished, the direction of the motor shaft is reversed and it sweeps back to the original position
   *  The cutter is engaged only when the toggle switch is in the ON position.
   *  If the switch is turned off mid way a cut, the cutter arm will still come back to its original position
   *  This will enable the fountain mode to resume.
  */
  
  //The number of steps to be made by the cutter, 1 step is 1.8 degrees
  int sweep = 140;
  
  // Specifing the direction,step and switch pin respectively on the arduino
  const int dir = 8;
  const int steps = 9;
  const int toggle = 3;
  
  void setup() {
   
    pinMode(toggle, INPUT); // Specifying the switch as an input
    pinMode(dir, OUTPUT); // Specifying the direction pin as an output 
    pinMode(steps, OUTPUT); // Specifying the steps pin as an output
  
    // Specifying the state of the direction and step pins
    digitalWrite(dir, LOW); 
    digitalWrite(steps, LOW);
  }
    
    void loop() {
      if (digitalRead(toggle) == LOW) { // Condition to read if the switch is in ON position
    
        digitalWrite(dir, HIGH); 
        move(sweep);  // Moving sweep steps in one direction
        
        delay(1000); /* Wait one second before reversing the direction
                        To make the cutter move faster, change the duration of this delay */
        
        digitalWrite(dir, LOW); // Changing the direction of the motor
        move(sweep); // Move in the reverse direction
        
        delay(2000); /* Wait for 2 seconds before re-engaging the cutter
                        To change the volume of liquid delivered by each cut, 
                        change the duration of this delay */
      }
  }

  // Function to drive the motor shaft for a set number of steps
  void move(int numSteps) {
    for (int i = 0; i < numSteps; i++) { // loop to step in one direction till the number of steps is complete
      sendPulse(); // moving one step 
      //delayMicroseconds(900);
    }
  }

  // Function to move the motor shaft  step -  1.8 degree
  void sendPulse() {
    digitalWrite(steps, HIGH);
    delayMicroseconds(100);
    digitalWrite(steps, LOW);
    delayMicroseconds(100);
  }
