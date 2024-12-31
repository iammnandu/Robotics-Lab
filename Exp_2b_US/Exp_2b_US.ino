// Defining the pins
const int trigPin = 9;
const int echoPin = 10;

// Defining variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Set the trigPin as OUTPUT
  pinMode(echoPin, INPUT);  // Set the echoPin as INPUT
  Serial.begin(9600);       // Start serial communication
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin to get the time duration of sound wave travel
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance
  distance = duration * 0.034 / 2;

  // Print the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Add a delay for readability
  delay(500);
}
