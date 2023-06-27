const int ledPin = 9;
const int tiempo = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite (ledPin, HIGH);
  delay(tiempo);
  digitalWrite(ledPin, LOW);
  delay(tiempo);
}