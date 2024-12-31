int led = 13; // LED connected to pin 13 (Built-in LED)

void setup() {
  Serial.begin(9600); // Initialize Serial Communication at 9600 baud rate
  pinMode(led, OUTPUT); // Set the LED pin as output
  Serial.println("--- Start Serial Monitor SEND_RCVE ---");
  Serial.println(" Type in Box above: ");
  Serial.println("(Decimal)(Hex)(Character)");
  Serial.println();
}

void loop() {
  if (Serial.available() > 0) { // Check if data is available on Serial Monitor
    char ByteReceived = Serial.read(); // Read the incoming byte
    Serial.print(ByteReceived);        // Print the decimal value
    Serial.print(" ");
    Serial.print(ByteReceived, HEX);   // Print the hexadecimal value
    Serial.print(" ");
    Serial.print(char(ByteReceived));  // Print the character equivalent

    if (ByteReceived == '1') {         // If '1' is received
      digitalWrite(led, HIGH);         // Turn the LED ON
      Serial.print(" LED ON ");
    }

    if (ByteReceived == '0') {         // If '0' is received
      digitalWrite(led, LOW);          // Turn the LED OFF
      Serial.print(" LED OFF ");
    }

    Serial.println(); // End the line
  }
}
