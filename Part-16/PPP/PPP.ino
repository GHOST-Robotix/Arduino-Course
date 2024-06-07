#include <Servo.h>

Servo ramazan;

void setup() {
  // put your setup code here, to run once:

  ramazan.attach(9);
  ramazan.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0;i<=180;i++){
  ramazan.write(i);
  delay(10);
  }

 for(int i=180; i>=0 ;i--){
  ramazan.write(i);
  delay(50);
  }

}