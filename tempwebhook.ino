
int led = D7;  // The on-board LED

void setup() 
{
  //pinMode(led, OUTPUT);
  
  Serial.begin(9600);
  pinMode(6, INPUT);
}

void loop() {

  String temp = String(random(60, 80));
  Particle.publish("temp", temp, PRIVATE);
  delay(30000);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(30000);   
  
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }
  delay(1000);
} 