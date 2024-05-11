#include <dht.h>

dht garmy;

#define DHT11 7

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int SSS = garmy.read11(DHT11);
  Serial.print("C'");

  Serial.print("گەرمی :");
  Serial.println(garmy.temperature);
  
  Serial.print("شێ :");
  Serial.println(garmy.humidity);
  delay(1000);

  if( garmy.temperature > 20 ){
  Serial.println("تکایە ئاگاداربە حالەتی لەناکاوە");
  }

}
