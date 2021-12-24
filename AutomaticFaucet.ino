#include<Servo.h>

Servo myservo;
int angle = 0;
int angleStep = 0;
void setup() {
  myservo.attach(3);
  pinMode(2,INPUT_PULLUP);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH){
    myservo.write(110);
  }else{
    myservo.write(-110);
    delay(3000);
  }
}
