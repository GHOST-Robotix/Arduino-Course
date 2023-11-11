//           a b c d e f g . 
int led[] = {2,3,4,5,6,7,8,9};

int numbers[11][8] = {
  {1,1,1,1,1,1,0,0}, // 0
  {0,1,1,0,0,0,0,0}, // 1
  {1,1,0,1,1,0,1,0}, // 2 
  {1,1,1,1,0,0,1,0}, // 3
  {0,1,1,0,0,1,1,0}, // 4
  {1,0,1,1,0,1,1,0}, // 5
  {1,0,1,1,1,1,1,0}, // 6
  {1,1,1,0,0,0,0,0}, // 7
  {1,1,1,1,1,1,1,0}, // 8
  {1,1,1,0,0,1,1,0}, // 9
  {0,0,0,0,0,0,0,1}, // .
};
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<8;i++){
    pinMode(led[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
    for(int i=0; i<11;i++){
      for(int j=0;j<8;j++){
        digitalWrite(led[j],numbers[i][j]);
      }
      delay(1000);
    }
}
