//Include the library code:
#include <LiquidCrystal.h>

//Defining LCD inputs via arduino outputs
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//Defining pushbutton 
#define INPUT_PIN 8
int val;

void setup() {

  //Defining up the LCD's number of columns and rows:
  lcd.begin(20, 4);
  //Reading digital signal from pushbutton
  val = digitalRead(INPUT_PIN);

  }

void loop() {
lcd.setCursor(0, 0);
  while (true)
  {
      while (digitalRead(INPUT_PIN) == false)
      {
      // Turn off the cursor:
      lcd.noCursor();

      delay(500);

      // Turn on the cursor:
      lcd.cursor();

      delay(500);;
      }
      
      if (digitalRead(INPUT_PIN) == true)
      {
          delay(50);
          if (digitalRead(INPUT_PIN) == true)
        {
          break;
        }
      }
  }
    
  lcd.noCursor();
  lcd.clear();
  delay(500);
  lcd.print("*-*-*-*-*--*-*-*-*-*"); 
  delay(500);
  
  
  
  lcd.setCursor(17, 1);
  lcd.print("* *");
  lcd.setCursor(0, 1);
  lcd.print("* *");
  delay(500);

  lcd.setCursor(1, 2);
  lcd.print("*");
  lcd.setCursor(18, 2);
  lcd.print("*");
  delay(500);

  lcd.setCursor(0, 3);
  lcd.print("*-*-*-*-*--*-*-*-*-*");  
  delay(1000);
  
  
    lcd.setCursor(7, 1);
    lcd.print("M");
    delay(150);
    lcd.print("E");
    delay(150);
    lcd.print("R");
    delay(150);
    lcd.print("R");
    delay(150);
    lcd.print("Y");
    delay(150);
  

    /*lcd.setCursor(0, 2);
    lcd.print("*");
    lcd.setCursor(19, 2);
    lcd.print("*");
    delay(150);
    */
  
    lcd.setCursor(5, 2);
    lcd.print("C");
    delay(150);
    lcd.print("H");
    delay(150);
    lcd.print("R");
    delay(150);
    lcd.print("I");
    delay(150);
    lcd.print("S");
    delay(150);
    lcd.print("T");
    delay(150);
    lcd.print("M");
    delay(150);
    lcd.print("A");
    delay(150);
    lcd.print("S");
    delay(150);
    lcd.print("!");
    delay(150);

  
  
    /*lcd.setCursor(0, 3);
    lcd.print("*-*-*-*-*--*-*-*-*-*");  
    delay(1500);
    lcd.clear();
    */
    delay(2000);
    lcd.clear();
  
}
