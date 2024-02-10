int ledR = 9;
int ledG = 10;
int ledB = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


// for(int i = 0; i < 256 ; i++){
//   int g = random(0,255);  
//   int r = random(0,255);  
//   int b = random(0,255);  
//   analogWrite(ledB,b);
//   analogWrite(ledR,r);
//   analogWrite(ledG,g);
//   delay(100);
//   if(i==255){
//   delay(1000);
//   }

// }


analogWrite(ledR,0);
analogWrite(ledB,255);
analogWrite(ledG,255);
delay(5000);
analogWrite(ledR,255);
analogWrite(ledB,255);
analogWrite(ledG,0);
delay(3000);
analogWrite(ledR,255-239);
analogWrite(ledB,255);
analogWrite(ledG,255-255);
delay(1000);


}
