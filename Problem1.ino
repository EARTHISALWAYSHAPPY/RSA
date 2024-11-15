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
    analogWrite(RedPin, 0); //yellow 
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 255);
  } else {
    analogWrite(RedPin, 0); //pink
    analogWrite(GreenPin, 255);
    analogWrite(BluePin, 0);
  }
}
