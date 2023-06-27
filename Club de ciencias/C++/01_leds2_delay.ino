const int ledPin1 = 10;
const int ledPin2 = 9;
const int tiempo = 500;

void setup () {
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);

}
//01_leds2_delay
Void loop () {
  digitalWrite (ledPin1, HIGH);
  digitalWrite (ledPin2, LOW);
  delay (tiempo);
  digitalWrite (ledPin1, LOW);
}