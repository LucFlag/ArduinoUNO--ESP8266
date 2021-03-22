//Defining input pin for the switch
const int switchPin = 2; 

//Defining output pin for the electric motor
const int motorPin = 9; 

//Variable for reading the switch status
int switchState = 0; 

void setup() {
  
  pinMode(motorPin, OUTPUT);
  
  pinMode(switchPin, INPUT);
}

void loop(){
  
  switchState = digitalRead(switchPin);

  //Checking if the switch is pressed.
  if(switchState == HIGH){
    //If yes, turn the motor on:
    digitalWrite(motorPin, HIGH);
  }
  else{
    //Else, turn the motor off:
    digitalWrite(motorPin, LOW);
  }
}
