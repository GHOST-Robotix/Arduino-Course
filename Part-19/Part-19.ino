int bz = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(bz,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(bz, HIGH);
  delay(1000);
  digitalWrite(bz, LOW);
  delay(5000);

}
