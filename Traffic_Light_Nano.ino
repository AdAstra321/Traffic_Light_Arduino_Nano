void setup() {
  pinMode(12, OUTPUT);  // Set pin 7 as an output
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH); // Turn the LED on
  delay(5000);           // Wait for 1 second
  digitalWrite(10, LOW);  // Turn the LED off
  digitalWrite(11, HIGH); 
  delay(2000);           // Wait for 1 second
  digitalWrite(11, LOW); 
  digitalWrite(12, HIGH);
  delay(5000);           // Wait for 1 second
  digitalWrite(12, LOW); 

  
  
  
}
