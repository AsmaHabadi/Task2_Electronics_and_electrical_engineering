
//Define Variables
int dcMotor=2;

void setup(){
  
  // Make dc Motor an output:
  pinMode(dcMotor, OUTPUT);
}

void loop(){
  //dc motor on 
  digitalWrite(dcMotor, HIGH);
  // Wait for 5000 millisecond(s)
  delay(5000); 
  //dc motor off 
  digitalWrite(dcMotor, LOW);
  // Wait for 1000 millisecond(s)
  delay(1000); 
} 






