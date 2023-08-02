int led1=8;
int led2=9;
int button=2;
int button2=3;
bool buttonS=false;
bool buttonS2=false;


void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(button,INPUT);
  pinMode(button2,INPUT);
}

void start(){
    buttonS = digitalRead(button);
  buttonS2 = digitalRead(button2);

  if(buttonS==true && buttonS2==true){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
}

void loop() {
start();
}
