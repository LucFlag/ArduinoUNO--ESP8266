const int buttonPin1 = 2;
const int buttonPin2 = 3;
//LED1

const int led1 = 3;  //
const int led2 = 5;  //
//LED2
const int led3 = 6;  //
const int led4 = 9;  //
//LED3
const int led5 = 10;  //
const int led6 = 11;  //

const int wy1 = 12;
const int wy2 = 13;
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, INPUT);
pinMode(13, INPUT);
}

void loop() {
  //Fading the LED

buttonState1 = digitalRead(wy1);
buttonState2 = digitalRead(wy2);

if (buttonState1 == HIGH && buttonState2 == LOW){
  for(int i=0; i<255; i++){
    analogWrite(led4, i);
    analogWrite(led3, i);
    delay(1);
  }
  for(int i=0; i<255; i++){
    analogWrite(led5, i);
    analogWrite(led2, i);
    delay(1);
  }
  for(int i=0; i<255; i++){
    analogWrite(led6, i);
    analogWrite(led1, i);
    delay(1);
  }
  
  //delay(300);

  for(int i=255; i>0; i--){
    analogWrite(led4, i);
    analogWrite(led3, i);
    delay(1);
  }
  
  for(int i=255; i>0; i--){
    analogWrite(led5, i);
    analogWrite(led2, i);
    delay(1);
  }
  
  for(int i=255; i>0; i--){
    analogWrite(led6, i);
    analogWrite(led1, i);
    delay(1);
  }
}

else if (buttonState1 == LOW && buttonState2 == HIGH){
  for(int i=0; i<255; i++){
    analogWrite(led6, i);
    analogWrite(led1, i);
    delay(1);
  }
  for(int i=0; i<255; i++){
    analogWrite(led5, i);
    analogWrite(led2, i);
    delay(1);
  }
  for(int i=0; i<255; i++){
    analogWrite(led4, i);
    analogWrite(led3, i);
    delay(1);
  }
  
  //delay(300);

  for(int i=255; i>0; i--){
    analogWrite(led6, i);
    analogWrite(led1, i);
    delay(1);
  }
  
  for(int i=255; i>0; i--){
    analogWrite(led5, i);
    analogWrite(led2, i);
    delay(1);
  }
  
  for(int i=255; i>0; i--){
    analogWrite(led4, i);
    analogWrite(led3, i);
    delay(1);
  }
}

else {
    analogWrite(led1, LOW);
    analogWrite(led2, LOW);
    analogWrite(led3, LOW);
    analogWrite(led4, LOW);
    analogWrite(led5, LOW);
    analogWrite(led6, LOW);

    
  for(int i=0; i<255; i++){
    analogWrite(led4, i);
    analogWrite(led5, i);
    analogWrite(led6, i);
    delay(6);
  }

  for(int i=255; i>0; i--){
    analogWrite(led4, i);
    analogWrite(led5, i);
    analogWrite(led6, i);
    delay(5);
  }  
  delay(100);
 /* 
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  delay(200);
 */
}
}
