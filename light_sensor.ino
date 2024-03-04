const int sensorPin = A0; // Analog pin 0

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  // Read the value from the sensor
  int sensorValue = analogRead(sensorPin);
  
  // Print the sensor value to the serial monitor
  Serial.println(sensorValue);
  
  int brightness = map(sensorValue, 0, 1023, 0, 100);
  
  // Print the brightness percentage to the serial monitor
  Serial.print("Brightness: ");
  Serial.print(brightness);
  Serial.println("%");
  

  
  delay(1000); // Wait for 1 second before taking the next reading
}
