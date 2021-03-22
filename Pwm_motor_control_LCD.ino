// include the library code:
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 6, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int motor = 9;
int potenciometer = 5;

const int wy1 = 7;
const int wy2 = 8;
int buttonState1 = 0;
int buttonState2 = 0;

byte bda[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B10001,
  B11111,
};
byte bdb[8] = {
  B11011,
  B10001,
  B01010,
  B11011,
  B11011,
  B01110,
  B10001,
  B11111,
};
byte bdc[8] = {
  B00000,
  B00000,
  B00000,
  B00001,
  B00011,
  B00110,
  B01101,
  B11011,
};
byte bdd[8] = {
  B00000,
  B00000,
  B00000,
  B11011,
  B11101,
  B00000,
  B11101,
  B11011, 
};
byte bde[8] = {
  B11011,
  B10110,
  B01100,
  B11000,
  B10000,
  B10000,
  B10000,
  B10000,
};



////////////////////////////////
void setup() {
  
  lcd.begin(16, 2);
  
  pinMode(9, OUTPUT);
  pinMode(5, INPUT);
  pinMode(wy1, INPUT);
  pinMode(wy2, INPUT);
  
  lcd.createChar(0,bda);
  lcd.createChar(1,bdb);
  lcd.createChar(2,bdc);
  lcd.createChar(3,bdd);
  lcd.createChar(4,bde);
  
  
  Serial.begin(9600);
}

///////////////////////////////
void loop() {
  
  int value = analogRead(potenciometer);//read input value: range between (0,1023)
  //int motor_speed = value/2.75;//PWM can only ouput 255 different values
  int motor_speed = ((value/3.5)-50)*255/200;
  analogWrite(motor,motor_speed);
  int motor_spd = (motor_speed*100)/250;     

    lcd.setCursor(2,1);
    lcd.print("%   ");
    lcd.setCursor(3,1);
    lcd.print(motor_spd);

if (5 < motor_spd && motor_spd <=15) {
  
  lcd.setCursor(1,1);
  lcd.write(byte(1));
  lcd.setCursor(1,0);
  lcd.print("      ");
}
  else if (15 < motor_spd && motor_spd <=25){
  
    lcd.setCursor(1,0);
    lcd.write(byte(2));
    lcd.setCursor(2,0);
    lcd.print("     ");
  }
  else if (25 < motor_spd && motor_spd <=40) {
  
    lcd.setCursor(2,0);
    lcd.write(byte(3));
    lcd.setCursor(3,0);
    lcd.print("    ");
  }
  else if (40 < motor_spd && motor_spd <=55) {
    
    lcd.setCursor(3,0);
    lcd.write(byte(3));
    lcd.setCursor(4,0);
    lcd.print("    ");
  }
  else if (55 < motor_spd && motor_spd <=70) {
    
    lcd.setCursor(4,0);
    lcd.write(byte(3));
    lcd.setCursor(5,0);
    lcd.print("    ");
  }
  else if (70 < motor_spd && motor_spd <=85) {
    
    lcd.setCursor(5,0);
    lcd.write(byte(3));
    lcd.setCursor(6,0);
    lcd.print("   ");
  }
  else if (85 < motor_spd && motor_spd <=100) {
    lcd.setCursor(6,0);
    lcd.write(byte(3));
    lcd.setCursor(7,0);
    lcd.print("  ");
  }
  else {
    //lcd.setCursor(1,0);
    //lcd.print("      ");
    lcd.setCursor(1,1);
    lcd.write(byte(0));
    
  }
  lcd.setCursor(8,0);
  lcd.print("RPM");
  lcd.setCursor(8,1);
  lcd.print("THROTTLE");
Serial.println(motor_speed);//for testing purposes
/*  
  lcd.setCursor(1,1);
  lcd.write(byte(3));
  lcd.setCursor(2,1);
  lcd.write(byte(4));
  lcd.setCursor(1,0);
  lcd.write(byte(5));
  lcd.setCursor(2,0);
  lcd.write(byte(7));
  lcd.setCursor(3,0);
  lcd.write(byte(7));
  lcd.write(byte(7));
  lcd.write(byte(7));
  lcd.write(byte(7));
*/  
};
