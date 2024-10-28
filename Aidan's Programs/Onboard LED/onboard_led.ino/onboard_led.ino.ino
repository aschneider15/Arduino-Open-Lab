void setup() {
  // put your setup code here, to run once:
  
  // Set builtin LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Set the builtin LED to HIGH or "on"
  digitalWrite(LED_BUILTIN, HIGH);
  // Wait one second
  delay(1000);
  // Set the builtin LED to LOW or "off"
  digitalWrite(LED_BUILTIN, LOW);
  // Wait one second
  delay(1000);
}
