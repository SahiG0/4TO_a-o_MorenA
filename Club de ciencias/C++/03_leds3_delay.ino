const int ledPin1 = 11;
const int ledPin2 = 10;
const int ledPin3 = 9;
const int tiempo = 500;

void setup () {
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
}
//01_leds2_delay
void loop () {
  digitalWrite (ledPin1, HIGH);
  digitalWrite (ledPin2, HIGH);
  digitalWrite (ledPin3, HIGH);
  delay (tiempo);
  digitalWrite (ledPin1, LOW);
  digitalWrite (ledPin2, LOW);
  digitalWrite (ledPin3, LOW);
  delay (tiempo);
}