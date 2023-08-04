int led=3;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int analog = analogRead(A0);

  Serial.println(analog);

  int ledPower=analog/4;

  digitalWrite(led,ledPower);

}
