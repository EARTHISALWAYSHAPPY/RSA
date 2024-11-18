#define IRpin 2
#define RedPin 9
#define GreenPin 10
#define BluePin 11
void setup() {
  pinMode(IRpin, INPUT);
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
}

void loop() {
  if (!digitalRead(IRpin)) {
    analogWrite(RedPin, 8); //yellow 
    analogWrite(GreenPin, 30);
    analogWrite(BluePin, 199);
  } else {
    analogWrite(RedPin, 0); //pink
    analogWrite(GreenPin, 235);
    analogWrite(BluePin, 103);
  }
}
