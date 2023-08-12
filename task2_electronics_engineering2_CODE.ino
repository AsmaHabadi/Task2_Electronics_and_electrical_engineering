#include <Servo.h>

// create servo object
Servo myservo;

//Define Variable
int pos = 0;

void setup(){
  // Attaches the servo on pin 9 to the servo object
  myservo.attach(9);  
}

void loop() {
  // From 0 degrees to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) { 
   
    // Tell servo to go to position in variable 'pos'
    myservo.write(pos); 
    // Waits 15 ms for the servo to reach the position
    delay(15);                       
  }
  
  //From 180 degrees to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) { 
    // Tell servo to go to position in variable 'pos'
    myservo.write(pos);  
    // Waits 15 ms for the servo to reach the position
    delay(15);
  }
} 