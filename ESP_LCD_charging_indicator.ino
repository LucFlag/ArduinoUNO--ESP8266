#include <LiquidCrystal.h>

LiquidCrystal lcd(6, 5, 3, 2, 1, 0);

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000,
};


byte batter[8] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
};

byte battery[8] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111,
};

byte battery1[8] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
};

byte battery2[8] = {
  B01110,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};

byte battery3[8] = {
  B01110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};

void setup() {
  lcd.createChar(0, smiley);
  lcd.createChar(1, batter);
  lcd.createChar(2, battery);
  lcd.createChar(3, battery1);
  lcd.createChar(4, battery2);
  lcd.createChar(5, battery3);
  lcd.begin(16, 2);  
  
}

void loop() {
  lcd.setCursor(0,1);
  lcd.print("CHARGING");
  
  lcd.setCursor(0,0);
  lcd.write(byte(1));
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("CHARGING");
  delay(1000);


  lcd.setCursor(0,0);
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.print("CHARGING.");
  delay(150);
  
  lcd.setCursor(0,0);
  lcd.write(byte(2));
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("CHARGING.");
  delay(1000);


  lcd.setCursor(0,0);
  lcd.write(byte(2));
  lcd.setCursor(0,1);
  lcd.print("CHARGING..");
  delay(150);

  
  lcd.setCursor(0,0);
  lcd.write(byte(3));
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("CHARGING..");
  delay(1000);


  lcd.setCursor(0,0);
  lcd.write(byte(3));
  lcd.setCursor(0,1);
  lcd.print("CHARGING...");
  delay(150);

  lcd.setCursor(0,0);
  lcd.write(byte(4));
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("CHARGING...");
  delay(1000);

  
  lcd.setCursor(0,0);
  lcd.write(byte(4));
  lcd.setCursor(0,1);
  lcd.print("CHARGING....u;u;");
  delay(150);
  
  lcd.setCursor(0,0);
  lcd.write(byte(5));
  delay(1000);

  lcd.clear();
  
  
  }
