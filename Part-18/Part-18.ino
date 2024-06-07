#include <Stepper.h>

Stepper st(2048,8,10,9,11);
int speed=10;

// int inp1 = 8;
// int inp2 = 9;
// int inp3 = 10;
// int inp4 = 11;
// int hangaw=1;

void setup() {
  // pinMode(inp1,OUTPUT);
  // pinMode(inp2,OUTPUT);
  // pinMode(inp3,OUTPUT);
  // pinMode(inp4,OUTPUT);

// for(int i = 0; i<5000;i++){
//       step(true);
//       delay(2);
//   }
// delay(2000);

// for(int i = 0; i<1000;i++){
//       step(false);
//       delay(2);
//   }

  st.setSpeed(speed);
  st.step(2048);
  delay(1000);
  st.step(-2048);
  


}

void loop() {

  

}

// void step(bool st){

//   if(st == true){

//       switch(hangaw) {
//         case 1: 
//           digitalWrite(inp1,HIGH);
//           digitalWrite(inp2,LOW);
//           digitalWrite(inp3,LOW);
//           digitalWrite(inp4,LOW);
//         break;
//         case 2:
//           digitalWrite(inp1,LOW);
//           digitalWrite(inp2,HIGH);
//           digitalWrite(inp3,LOW);
//           digitalWrite(inp4,LOW);
//         break;
//         case 3: 
//           digitalWrite(inp1,LOW);
//           digitalWrite(inp2,LOW);
//           digitalWrite(inp3,HIGH);
//           digitalWrite(inp4,LOW);
//         break;
//         case 4:
//           digitalWrite(inp1,LOW);
//           digitalWrite(inp2,LOW);
//           digitalWrite(inp3,LOW);
//           digitalWrite(inp4,HIGH);
//         break;
//     }

//   }else{

//      switch(hangaw) {
//         case 1: 
//           digitalWrite(inp1,LOW);
//           digitalWrite(inp2,LOW);
//           digitalWrite(inp3,LOW);
//           digitalWrite(inp4,HIGH);
//         break;
//         case 2:
//           digitalWrite(inp1,LOW);
//           digitalWrite(inp2,LOW);
//           digitalWrite(inp3,HIGH);
//           digitalWrite(inp4,LOW);
//         break;
//         case 3: 
//           digitalWrite(inp1,LOW);
//           digitalWrite(inp2,HIGH);
//           digitalWrite(inp3,LOW);
//           digitalWrite(inp4,LOW);
//         break;
//         case 4:
//           digitalWrite(inp1,HIGH);
//           digitalWrite(inp2,LOW);
//           digitalWrite(inp3,LOW);
//           digitalWrite(inp4,LOW);
//         break;
//     }
//   }

//   hangaw++;
//   if(hangaw > 4){
//       hangaw=1;
//   }

// }