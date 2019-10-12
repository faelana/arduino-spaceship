int switchState=0;

void setup() {
  pinMode(3,OUTPUT); // green LED
  pinMode(4,OUTPUT); // 2red LED
  pinMode(5,OUTPUT); // 1red LED
  pinMode(2,INPUT);
  
}

void loop() {
  switchState=digitalRead(2);

  // the button is not pressed
  if (switchState==LOW) {
    digitalWrite(3,HIGH); // green LED
    digitalWrite(4,LOW);  // 2red LED
    digitalWrite(5,LOW);  // 1red LED
  }
  
  else {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);

    delay(250);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    delay(250);
  }
}
