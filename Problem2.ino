#include <DHT11.h>
#define IRpin 2

#define DHTPIN 4
DHT11 dht11(DHTPIN);
    
#define RedPin 11
#define GreenPin 10
#define BluePin 9
void setup()
{
  pinMode(IRpin, INPUT);
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
}

void loop()
{
  float temperature = dht11.readTemperature();
  if (!digitalRead(IRpin))
  {
    if (temperature < 20)
    {
      digitalWrite(RedPin, 0);
      digitalWrite(GreenPin, 0);
      digitalWrite(BluePin, 255);
    }
    else if (temperature >= 20 && temperature <= 30)
    {
      digitalWrite(RedPin, 0);
      digitalWrite(GreenPin, 255);
      digitalWrite(BluePin, 0);
    }
    else if (temperature > 30)
    {
      digitalWrite(RedPin, 255);
      digitalWrite(GreenPin, 0);
      digitalWrite(BluePin, 0);
    }
  }
}
