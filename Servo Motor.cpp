#include <Servo.h> 
Servo myServo;  
void setup() { 
  Serial.begin(9600); 
  myServo.attach(9); 
} 
void loop() { 
  for (int i = 0; i < 180; i++) { 
  myServo.write(i); 
  Serial.println(i); // Print the current angle to the monitor 
  delay(10); 
  } 
  for (int i = 179; i > 0; i--) { 
  myServo.write(i); 
  Serial.println(i); // Print the current angle to the monitor 
  delay(10); 
  } 
} 
