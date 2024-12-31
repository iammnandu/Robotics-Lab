int IRSensor = 3;  // Connect IR sensor to Arduino pin 3
int LED = 11;      // Connect LED to Arduino pin 11

void setup() {
  pinMode(IRSensor, INPUT);   // Set IR sensor pin as INPUT
  pinMode(LED, OUTPUT);       // Set LED pin as OUTPUT
  Serial.begin(9600);         // Start serial communication
}

void loop() {
  int Sensordata = digitalRead(IRSensor);  // Read the IR sensor output

  // Print the sensor value on Serial Monitor
  Serial.print("Sensor value: ");
  Serial.println(Sensordata);

  if (Sensordata == 0) {      // If an obstacle is detected
    digitalWrite(LED, HIGH);  // Turn LED ON
  } else {                    // If no obstacle is detected
    digitalWrite(LED, LOW);   // Turn LED OFF
  }
}
