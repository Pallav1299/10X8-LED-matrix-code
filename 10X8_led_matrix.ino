/* 
 *  DECIMAL CHARACTER MAP  *
  24,60,102,126,102,102,102,0,            // A(8 byte pattern)
  124,102,102,124,102,102,124,0,          // B(8 byte pattern)
  60,102,96,96,96,102,60,0,               // C(8 byte pattern)
  120,108,102,102,102,108,120,0,          // D(8 byte pattern)
  126,96,96,120,96,96,126,0,              // E(8 byte pattern)
  126,96,96,120,96,96,96,0,               // F(8 byte pattern)
  60,102,96,110,102,102,60,0,             // G(8 byte pattern)
  102,102,102,126,102,102,102,0,          // H(8 byte pattern)
  60,24,24,24,24,24,60,0,                 // I(8 byte pattern)
  30,12,12,12,12,108,56,0,                // J(8 byte pattern)
  102,108,120,112,120,108,102,0,          // K(8 byte pattern)
  96,96,96,96,96,96,126,0,                // L(8 byte pattern)
  99,119,127,107,99,99,99,0,              // M(8 byte pattern)
  102,118,126,126,110,102,102,0,          // N(8 byte pattern)
  60,102,102,102,102,102,60,0,            // O(8 byte pattern)
  124,102,102,124,96,96,96,0,             // P(8 byte pattern)
  60,102,102,102,102,60,14,0,             // Q(8 byte pattern)
  124,102,102,124,120,108,102,0,          // R(8 byte pattern)
  60,102,96,60,6,102,60,0,                // S(8 byte pattern)
  126,24,24,24,24,24,24,0,                // T(8 byte pattern)
  102,102,102,102,102,102,60,0,           // U(8 byte pattern)
  102,102,102,102,102,60,24,0,            // V(8 byte pattern)
  99,99,99,107,127,119,99,0,              // W(8 byte pattern)
  102,102,60,24,60,102,102,0,             // X(8 byte pattern)
  102,102,102,60,24,24,24,0,              // Y(8 byte pattern)
  126,6,12,24,48,96,126,0,                // Z(8 byte pattern)
*/


int VCC[8]={0,1,2,3,4,5,6,7};  //no. of columns
int GROUND[10]={8,9,10,11,12,13,A0,A1,A2,A3};  //no. of rows

char TEXT[] = {0,0,0,0,0,0,0,0,

102,102,102,126,102,102,102,0,          // H (8 byte pattern)
126,96,96,120,96,96,126,0,              // E 
96,96,96,96,96,96,126,0,                // L
96,96,96,96,96,96,126,0,                // L
60,102,102,102,102,102,60,0,            // O
0,0,0,0,0,0,0,0,                        //space
99,99,99,107,127,119,99,0,              // W
60,102,102,102,102,102,60,0,            // O
124,102,102,124,120,108,102,0,          // R
96,96,96,96,96,96,126,0,                // L
120,108,102,102,102,108,120,0,          // D
0,0,0,0,0,0,0,0
};


void setup(){
  for(int i=0;i<14;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);

  
  

  

  for(int j=0;j<8;j++){      //initially turniung all LEDs off
    digitalWrite(VCC[j],LOW);

  }
  
}

void loop(){
  
 for(int x=0;x<104;x++)  // total no. of byte patterns
  {
    for(int a=0;a<20;a++)  //to generate time delay
    {
         for (int i=0;i<10;i++)  //to manipulate ground pins
          { 
             digitalWrite(GROUND[i],LOW);
             PORTD = TEXT[i+x];
            delay(1);
            digitalWrite(GROUND[i],HIGH);
          }    
    }
  }
  delay(1000);
}


  


