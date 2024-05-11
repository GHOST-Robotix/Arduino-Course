int trig = 5;
int echo =4;

void setup() {
  // put your setup code here, to run once:

pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delayMicroseconds(5);
  digitalWrite(trig,LOW);
  delayMicroseconds(10);
  digitalWrite(trig,HIGH);

  long time = pulseIn(echo,HIGH);
  Serial.print("time : ");
  Serial.print(time);
  Serial.println("");
  delay(1000);
  long dis = 0.017 * time ;
   Serial.print("distance : ");
  Serial.print(dis);
  Serial.println(" cm");
  delay(1000);

}
