cthinkeronst int SENSOR_PIN = 7;  // Pin connected to the sensor signal
int lastState = LOW;       // Stores the previous state of the sensor
int currentState;          // Variable to store the current state

void setup() {
  Serial.begin(9600);       // Initialize serial communication
  pinMode(SENSOR_PIN, INPUT);  // Set the sensor pin as an input
}

void loop() {
  currentState = digitalRead(SENSOR_PIN);  // Read the sensor's current state
  if (lastState == LOW && currentState == HIGH) {  // Detect a touch
    Serial.println("The sensor is touched");
  }
  lastState = currentState;  // Update the last state
}


// Constants
const int SENSOR_PIN = 7;  // Pin connected to the sensor signal

void setup() {
  Serial.begin(9600);       // Initialize serial communication
  pinMode(SENSOR_PIN, INPUT);  // Set the sensor pin as an input
}

void loop() {
  int state = digitalRead(SENSOR_PIN);  // Read the current state of the sensor
  Serial.println(state);  // Print the state to the Serial Monitor
  delay(100);  // Add a short delay for better readability
}
