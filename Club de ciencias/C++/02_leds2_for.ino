const int ledPin1 = 10;
const int ledPin2 = 9;
void setup () {
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
}

void setup () {
  for (int tiempo = 1; tiempo < 200; tiempo = tiempo + 10) {
    digitalWrite (ledPin1, HIGH);
    digitalWrite (ledPin2, LOW);
    delay (tiempo);
    digitalWrite (ledPin1, HIGH);
    digitalWrite (ledPin2, LOW);
    delay (tiempo);
  }
  
}