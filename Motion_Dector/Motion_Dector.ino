int pirPin = 6; 
int val = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(pirPin, INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
   val = digitalRead(pirPin);
   Serial.println(val); 
   //delay (1000);
   
}
