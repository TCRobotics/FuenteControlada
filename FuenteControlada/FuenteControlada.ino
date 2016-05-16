/*//////////////////////////////////////////////////////////////////////////////
Fuente controlada que dibuja con Agua

Envía este texto por serie para ver una demo, cada letra es un efecto:
HHHbbbbbbBBBBxxxxxxxxxxxxXXXXXXXXXXXXcccCCC/////////////=====WWWWWVVVVVVVVyyyyyyyyyEE

07/5/2016 Alejandro Taracido Cano (@TCRobotics)
https://about.me/TCRobotics
///////////////////////////////////////////////////////////////////////////////*/

//#include <digitalWriteFast.h>

bool dot[8]={0,0,0,0,0,0,0,0};
#define OO true
#define XX false
#define _ true  //vacio
#define X false //agua


String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
int timeDot = 60;


void setup() {
  Serial.begin(115200);
  inputString.reserve(200); // reserve 200 bytes for the inputString
  /*
  pinModeFast(4,OUTPUT);
  pinModeFast(5,OUTPUT);
  pinModeFast(6,OUTPUT);
  pinModeFast(7,OUTPUT);
  pinModeFast(8,OUTPUT);
  pinModeFast(9,OUTPUT);
  pinModeFast(10,OUTPUT);
  pinModeFast(11,OUTPUT);
  digitalWriteFast(4,true);
  digitalWriteFast(5,true);
  digitalWriteFast(6,true);
  digitalWriteFast(7,true);
  digitalWriteFast(8,true);
  digitalWriteFast(9,true);
  digitalWriteFast(10,true);
  digitalWriteFast(11,true);
  */
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(4,true);
  digitalWrite(5,true);
  digitalWrite(6,true);
  digitalWrite(7,true);
  digitalWrite(8,true);
  digitalWrite(9,true);
  digitalWrite(10,true);
  digitalWrite(11,true);
  Serial.println("Que quieres que escriba en agua?");
}

void loop() {
 // print the string when a newline arrives:
  if (stringComplete)
  {
    for (int i=0; i <= inputString.length(); i++)
    {
      if (inputString.charAt(i) == 'H')
      {
        timeDot = 30;
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,X,X,X,X,_,_ ,timeDot);
        waterPrint( _,X,X,X,X,X,X,_ ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( _,X,X,X,X,X,X,_ ,timeDot);
        waterPrint( _,_,X,X,X,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( _,X,X,X,X,X,X,_ ,timeDot);
        waterPrint( _,_,X,X,X,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
      }
      if (inputString.charAt(i) == 'b') //BARRIDO VA Y VUELVE
      {
        timeDot = 60;
        waterPrint( _,_,_,_,_,_,_,X ,timeDot);
        waterPrint( _,_,_,_,_,_,X,_ ,timeDot);
        waterPrint( _,_,_,_,_,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,X,_,_,_ ,timeDot);
        waterPrint( _,_,_,X,_,_,_,_ ,timeDot);
        waterPrint( _,_,X,_,_,_,_,_ ,timeDot);
        waterPrint( _,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,X,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,X,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,X,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,X,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,X ,timeDot);
      }
      if (inputString.charAt(i) == 'B') //BARRIDO VA Y VUELVE MAGRANDE
      {
        timeDot = 60;
        waterPrint( _,_,_,_,_,_,_,X ,timeDot);
        waterPrint( _,_,_,_,_,_,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,X,_ ,timeDot);
        waterPrint( _,_,_,_,_,X,X,_ ,timeDot);
        waterPrint( _,_,_,_,_,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,X,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,X,_,_,_ ,timeDot);
        waterPrint( _,_,_,X,X,_,_,_ ,timeDot);
        waterPrint( _,_,_,X,_,_,_,_ ,timeDot);
        waterPrint( _,_,X,X,_,_,_,_ ,timeDot);
        waterPrint( _,_,X,_,_,_,_,_ ,timeDot);
        waterPrint( _,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( _,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,X,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,X,X,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,X,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,X,X,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,X,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,X,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,X,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,X,X,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,X,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,X,X ,timeDot);
      }
      if (inputString.charAt(i) == 'x') //BARRIDO VA Y VUELVE
      {
        timeDot = 60;
        waterPrint( X,_,_,_,_,_,_,X ,timeDot);
        waterPrint( _,X,_,_,_,_,X,_ ,timeDot);
        waterPrint( _,_,X,_,_,X,_,_ ,timeDot);
        waterPrint( _,_,_,X,X,_,_,_ ,timeDot);
        waterPrint( _,_,_,X,X,_,_,_ ,timeDot);
        waterPrint( _,_,X,_,_,X,_,_ ,timeDot);
        waterPrint( _,X,_,_,_,_,X,_ ,timeDot);
        waterPrint( X,_,_,_,_,_,_,X ,timeDot);
      }
      if (inputString.charAt(i) == 'X') //BARRIDO VA Y VUELVE
      {
        timeDot = 60;
        waterPrint( X,X,_,_,_,_,X,X ,timeDot);
        waterPrint( _,X,X,_,_,X,X,_ ,timeDot);
        waterPrint( _,_,X,X,X,X,_,_ ,timeDot);
        waterPrint( _,_,_,X,X,_,_,_ ,timeDot);
        waterPrint( _,_,X,X,X,X,_,_ ,timeDot);
        waterPrint( _,X,X,_,_,X,X,_ ,timeDot);
        waterPrint( X,X,_,_,_,_,X,X ,timeDot);
      }
      if (inputString.charAt(i) == 'c') //CORTINA IZQUIERDA
      {
        timeDot = 60;
        waterPrint( _,_,_,_,_,_,_,X ,timeDot);
        waterPrint( _,_,_,_,_,_,X,X ,timeDot);
        waterPrint( _,_,_,_,_,X,X,X ,timeDot);
        waterPrint( _,_,_,_,X,X,X,X ,timeDot);
        waterPrint( _,_,_,X,X,X,X,X ,timeDot);
        waterPrint( _,_,X,X,X,X,X,X ,timeDot);
        waterPrint( _,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( _,X,X,X,X,X,X,X ,timeDot);
        waterPrint( _,_,X,X,X,X,X,X ,timeDot);
        waterPrint( _,_,_,X,X,X,X,X ,timeDot);
        waterPrint( _,_,_,_,X,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,X ,timeDot);
      }
      if (inputString.charAt(i) == 'C') //CORTINA IZQUIERDA
      {
        timeDot = 60;
        waterPrint( X,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,X,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,_,_,_,_,_,_,_ ,timeDot);
      }
      if (inputString.charAt(i) == '/') //CORTINA IZQUIERDA
      {
        timeDot = 65;
        waterPrint( X,X,X,X,_,_,_,X ,timeDot);
        waterPrint( X,X,X,_,_,_,X,X ,timeDot);
        waterPrint( X,X,_,_,_,X,X,X ,timeDot);
        waterPrint( X,_,_,_,X,X,X,X ,timeDot);
        waterPrint( _,_,_,X,X,X,X,_ ,timeDot);
        waterPrint( _,_,X,X,X,X,_,_ ,timeDot);
        waterPrint( _,X,X,X,X,_,_,_ ,timeDot);
      }
      if (inputString.charAt(i) == 'y') //lluvia
      {
        timeDot = 40;
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
        waterPrint( random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2),random(0,2) ,timeDot);
      }
      if (inputString.charAt(i) == '=') //BARRAS
      {
        timeDot = 80;
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
      }
      if (inputString.charAt(i) == 'W') //cuadrados
      {
        timeDot = 200;
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
      }
      if (inputString.charAt(i) == 'E') //Vaciar
      {
        timeDot = 1000;
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
      }
      if (inputString.charAt(i) == 'V') //FLECHAS
      {
        timeDot = 30;
        waterPrint( _,_,_,X,X,_,_,_ ,timeDot);
        waterPrint( _,_,X,X,X,X,_,_ ,timeDot);
        waterPrint( _,X,X,X,X,X,X,_ ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,X,X,X,X,X ,timeDot);
        waterPrint( X,X,X,_,_,X,X,X ,timeDot);
        waterPrint( X,X,_,_,_,_,X,X ,timeDot);
        waterPrint( X,_,_,_,_,_,_,X ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
      }
      if (inputString.charAt(i) == ' ')
      {
        timeDot = 30;
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
        waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
      }
    }
    waterPrint( _,_,_,_,_,_,_,_ ,timeDot);
    Serial.print("He escrito en agua: ");
    Serial.println(inputString);
    // clear the string:
    inputString = "";
    stringComplete = false;
    delay(2000);
    Serial.println("Que quieres que escriba en agua?");
  }
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}

void waterPrint( boolean x0, boolean x1, boolean x2, boolean x3, boolean x4, boolean x5, boolean x6, boolean x7, int timeDot) {
  /*
  digitalWriteFast(4,x0);
  digitalWriteFast(5,x1);
  digitalWriteFast(6,x2);
  digitalWriteFast(7,x3);
  digitalWriteFast(8,x4);
  digitalWriteFast(9,x5);
  digitalWriteFast(10,x6);
  digitalWriteFast(11,x7);
  */
  digitalWrite(4,x0);
  digitalWrite(5,x1);
  digitalWrite(6,x2);
  digitalWrite(7,x3);
  digitalWrite(8,x4);
  digitalWrite(9,x5);
  digitalWrite(10,x6);
  digitalWrite(11,x7);
  delay(timeDot);

  if(!x0)  Serial.print("0");
  else        Serial.print(" ");
  if(!x1)  Serial.print("0");
  else        Serial.print(" ");
  if(!x2)  Serial.print("0");
  else        Serial.print(" ");
  if(!x3)  Serial.print("0");
  else        Serial.print(" ");
  if(!x4)  Serial.print("0");
  else        Serial.print(" ");
  if(!x5)  Serial.print("0");
  else        Serial.print(" ");
  if(!x6)  Serial.print("0");
  else        Serial.print(" ");
  if(!x7)  Serial.println("0");
  else        Serial.println(" ");
}
