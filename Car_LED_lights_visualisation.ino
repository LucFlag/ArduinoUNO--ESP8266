const int buttonPin1 = 2;
const int buttonPin2 = 3;
//LED1
const int led1 = 4;  //R
const int led2 = 5;  //G
const int led3 = 6;  //B
//LED2
const int led4 = 7;  //R
const int led5 = 8;  //G
const int led6 = 9; //B
//LED3
const int led7 = 10;  //R
const int led8 = 11;  //G
const int led9 = 12; //B

int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
}

void loop() {
/*    // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  
    digitalWrite(led1, LOW);
    //delay(150);
  if(buttonState1 == HIGH && buttonState2 == LOW){
    
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    delay(150);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    delay(150);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    delay(10);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(150);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    delay(150);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    delay(150);
    
    KNIGHT RIDER
    digitalWrite(led7, HIGH);
    digitalWrite(led9, HIGH);
    delay(150);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    delay(150);
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    delay(150);
    digitalWrite(led7, LOW);
    digitalWrite(led9, LOW);
    delay(150);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    delay(50);

  
  } 
  else if(buttonState2 == HIGH && buttonState1 == LOW){
    digitalWrite(led9, HIGH);
    digitalWrite(led8, HIGH);
    delay(150);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, HIGH);
    delay(150);
    digitalWrite(led3, HIGH);
    digitalWrite(led2, HIGH);
    delay(150);
    digitalWrite(led9, LOW);
    digitalWrite(led8, LOW);
    delay(150);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    delay(150);
    digitalWrite(led3, LOW);
    digitalWrite(led2, LOW);
    delay(150);
  }
  else {
  digitalWrite(led1, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led7, HIGH);
    delay(650);
    digitalWrite(led1, LOW);
    //digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led7, LOW);
    //digitalWrite(led6, LOW);
    delay(650);
  
    digitalWrite(led1, HIGH);
    delay(150);
    digitalWrite(led4, HIGH);
    delay(150);
    digitalWrite(led7, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    delay(150);
    digitalWrite(led4, LOW);
    delay(150);
    digitalWrite(led7, LOW);
    delay(200);
   
*/  
  //KNIGHT RIDER
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    delay(500);
  
}
