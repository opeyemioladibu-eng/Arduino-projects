const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // LED ON
  delay(2000);                    // Wait 2 seconds
  digitalWrite(LED_PIN, LOW);   // LED OFF
  delay(1000);
}                                 // wait 1 second
