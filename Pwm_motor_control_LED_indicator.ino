int motor = 9;
int potenciometer = 5;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

void setup(){
  //Defining electric motor output 
  pinMode(9,OUTPUT);

  //Defining throttle signal input
  pinMode(5,INPUT);
  
  //Defining LED outputs  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  Serial.begin(9600);
}

void loop(){
  
  //Read input value, range between (0,1023)
  int value = analogRead(potenciometer);
  
  //PWM in ArduinoUNO can only ouput 255 different values
  int motor_speed = ((value/3.5)-49)*255/200;
  
  analogWrite(motor,motor_speed);
  //Number of turned on diodes depends on throttle value 
   if (motor_speed< 5){
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led4, LOW);
     digitalWrite(led5, LOW);
    };
    if (5<= motor_speed && motor_speed< 51){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led4, LOW);
     digitalWrite(led5, LOW);
    };
    if (51<= motor_speed && motor_speed< 102){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);
     digitalWrite(led4, LOW);
     digitalWrite(led5, LOW);
    };
    if (102<= motor_speed && motor_speed< 153){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led4, LOW);
     digitalWrite(led5, LOW);
    }; 
    if (153<= motor_speed && motor_speed< 204){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led4, HIGH);
     digitalWrite(led5, LOW);
    }; 
    if (204<= motor_speed && motor_speed< 255){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led4, HIGH);
     digitalWrite(led5, HIGH);
    };  
  
 
  //Only for testing purposes
  Serial.println(motor_speed);
};
