#include <Servo.h>
Servo myservo;

int pirPin = 3;
int pirValue;


void setup() {
  // put your setup code here, to run once:
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
  myservo.attach(4);
  myservo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:;
  pirValue = digitalRead(pirPin);
  Serial.println(pirValue);
  delay(100);
  if (pirValue == 1){
    myservo.write(0);
    delay(200);
    myservo.write(150);
    delay(200);
    myservo.write(90);
    
    pirValue = 0;
  }
    
}
