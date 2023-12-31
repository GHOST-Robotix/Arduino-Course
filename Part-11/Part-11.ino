#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  lcd.setCursor(3, 0);
  lcd.print("GHOST TECH");
  delay(2000);
  lcd.clear();
  for(int i=0;i<4;i++){
    
    lcd.setCursor(0, 0);
    lcd.print("Loading.");
    delay(500);
    lcd.clear();
    lcd.print("Loading..");
    delay(500);
    lcd.clear();
    lcd.print("Loading...");
    delay(500);
    lcd.clear();

  }

  lcd.setCursor(0, 0);
  lcd.print("R u sure to turn");
  lcd.setCursor(0, 1);
  lcd.print("off the Robot?");
  lcd.blink();
  delay(3000);

  lcd.setCursor(0, 0);
  lcd.print("Yes           No");
  lcd.setCursor(0, 1);
  lcd.print("---           --");
  lcd.blink();
  delay(1000);
    lcd.clear();


}
