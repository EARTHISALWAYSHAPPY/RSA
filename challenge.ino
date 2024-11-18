// USE PWM pin(~) of Arduino UNO
#define RedPin 11
#define GreenPin 10
#define BluePin 9
#define Delaytime 100
int Val_Red, Val_Green, Val_Blue;
void setup()
{
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
}
void loop()
{
  // RED Start
  Val_Red = 0;
  Val_Green = 255;
  Val_Blue = 255;
  for (int count = 0; count <= 255; count++)
  {
    analogWrite(RedPin, Val_Red);
    analogWrite(GreenPin, Val_Green);
    analogWrite(BluePin, Val_Blue);
    Val_Red += 1;
    Val_Green -= 1;
    delay(Delaytime);
  }

  // GREEN Start
  Val_Red = 255;
  Val_Green = 0;
  Val_Blue = 255;
  for (int count = 0; count <= 255; count++)
  {
    analogWrite(RedPin, Val_Red);
    analogWrite(GreenPin, Val_Green);
    analogWrite(BluePin, Val_Blue);
    Val_Green += 1;
    Val_Blue -= 1;
    delay(Delaytime);
  }

  // BLUE Start
  Val_Red = 255;
  Val_Green = 255;
  Val_Blue = 0;
  for (int count = 0; count <= 255; count++)
  {
    analogWrite(RedPin, Val_Red);
    analogWrite(GreenPin, Val_Green);
    analogWrite(BluePin, Val_Blue);
    Val_Blue += 1;
    Val_Red -= 1;
    delay(Delaytime);
  }
}
