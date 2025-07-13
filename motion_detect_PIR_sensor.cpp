// C++ code
const int pirPin=4;
const int ledPin=12;

int currPirState=LOW;
int lastPirState=LOW;

void setup(){
  Serial.begin(9600);
  pinMode(pirPin,INPUT);
  pinMode(ledPin,OUTPUT);
  
  
}

void loop(){
  currPirState=digitalRead(pirPin);
  
  if(currPirState != lastPirState){
    if(currPirState==HIGH){
      digitalWrite(ledPin,HIGH);
      Serial.println("Motion Detected");
    }
    else{
      digitalWrite(ledPin,LOW);
      Serial.println("Motion Ended");
  	}
    lastPirState=currPirState;
  }	
}
