#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
int btn=2;



void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
 pinMode(btn,INPUT);
 lcd.init();
 lcd.backlight();

 lcd.setCursor(3, 0);
  lcd.print("GHOST TECH");
  delay(2000);
  lcd.clear();
}

bool isActive = false;

void loop() {
  // put your main code here, to run repeatedly:
 

if(digitalRead(btn)){
isActive = !isActive;
Serial.println(isActive);
}

 if(isActive == true){
//  if(digitalRead(btn)){
    lcd.setCursor(0, 0);
    lcd.print("Loading...");

 }else{
  lcd.clear();
 }


}
