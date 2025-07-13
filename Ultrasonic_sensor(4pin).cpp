// C++ code
//
const int trigPin=9;
const int echoPin=12;

int distance;
int duration;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  
}

void loop(){
  //gurbage clean
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin,LOW);
  
  duration=pulseIn(echoPin,HIGH);//duration in micros
  
  distance=duration*0.034/2; //distance in cm
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(50);
  
 }
