// Experiment 3: Reading a Potentiometer using ESP32
// Define the analog pin
const int potPin = 5;
// GPI012 is input only

void setup() {
    Serial.begin(115200);
    // Start Serial Monitor at 115200 baud rate
}

void loop() {
    int potValue = analogRead(potPin);
    // Read analog value (0-4095)

    Serial.print("Potentiometer Value: ");
    Serial.println(potValue);
    // Print the value
    delay(200);
    // Delay for readability
}