#include "DHT.h"

#define DHTPIN 9
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  delay(10);
  dht.begin();
  }

void loop() {
  float nem = dht.readHumidity();
  float sicaklik = dht.readTemperature();
  delay(300);
  Serial.print("Sıcaklık Değeri : ");
  Serial.print(sicaklik);
  Serial.print(" derece");
  Serial.print(" // ");
  Serial.print("Nem Miktarı : ");
  Serial.println(nem);
  

}
