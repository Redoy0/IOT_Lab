// C++ code
//
const int LedPin=13;
const int TmpPin= A0 ;
void setup(){
  //for temp
  Serial.begin(9600);
  analogReference(DEFAULT);
  
  //for Led
	pinMode(LedPin,OUTPUT);
}
void loop(){
  int sensorVal=analogRead(TmpPin);//0-1023
  
  float voltage=sensorVal*(5.0/1023.0);
  
  float tempC=(voltage-0.5)*100;
  float tempF=(tempC*9.0/5.0)+32.0;
  	
  Serial.print("Temp in Celsius: ");
  
  Serial.print(tempC);
  
  Serial.print(" Temp in Fahrenheit: ");
  
  Serial.println(tempF);
  
  if(tempC>30.0){
    
  digitalWrite(LedPin,HIGH);
  delay(1000);
  digitalWrite(LedPin,LOW);
  delay(1000);
    
  }
  
}
