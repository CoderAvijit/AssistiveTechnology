//PROJECT NAME:- ASISTIVE TECHNOLOGY
//PROJECT MEMBER:-AVIJIT RANA(CST 3RD YEAR)
//                GOURAB MUKHERJEE(ETC 3RD YEAR)

//CODED BY :-AVIJIT RANA(CST 3RD YEAR)
//DEVICE MANUFACTURER :- GOURAB MUKHERJEE(ETC 3RD YEAR)


String mcode = "R";     //string to store serial input
byte mcodelength = 0; //byte to store length of mcode
byte space = 500;     //delay for spacing

char i;               //char for parsing mcode



void setup()
{
  Serial.begin(9600);       //start serial coma for debugging
  pinMode(3, OUTPUT);       //pin 3 (vibrator1) set for OUTPUT
  pinMode(4, OUTPUT);       //pin 4 (vibrator2) set for OUTPUT
  pinMode(5, OUTPUT);       //pin 5 (vibrator3) set for OUTPUT
  pinMode(6, OUTPUT);      //pin 6 (vibrator4) set for OUTPUT
  pinMode(7, OUTPUT);      //pin 7 (vibrator5) set for OUTPUT

}


void dot1()
{
  digitalWrite(3, HIGH);      //Vibrator1 on
  delay(200);                  //on for 50 ms
  digitalWrite(3, LOW);       //vibrator1 off
  delay(400);                 //wait for 100 ms
}
void dot2()
{
  digitalWrite(4, HIGH);      //vibrator2 on
  delay(200);                  //on for 50 ms
  digitalWrite(4, LOW);       //vibrator2 off
  delay(400);                 //wait for 100 ms
}
void dot3()
{
  digitalWrite(5, HIGH);      //buzzer3 on (here for all buzzers are means to basically vibrator)
  delay(200);                  //on for 50 ms
  digitalWrite(5, LOW);       //buzzer3 off
  delay(400);                 //wait for 100 ms
}
void dot4()
{
  digitalWrite(6, HIGH);      //buzzer4 on
  delay(200);                  //on for 50 ms
  digitalWrite(6, LOW);       //buzzer4 off
  delay(400);                 //wait for 100 ms
}
void dot5()
{
  digitalWrite(7, HIGH);      //buzzer1 on
  delay(200);                  //on for 50 ms
  digitalWrite(7, LOW);       //buzzer5 off
  delay(400);                 //wait for 100 ms
}
void dash1()
{
  digitalWrite(3, HIGH);      //buzzer1 on
  delay(700);                 //on for 300 ms
  digitalWrite(3, LOW);       //buzzer1 off
  delay(400);                 //wait for 100ms
}
void dash2()
{
  digitalWrite(4, HIGH);      //buzzer2 on
  delay(700);                 //on for 300 ms
  digitalWrite(4, LOW);       //buzzer2 off
  delay(400);                 //wait for 100ms
}
void dash3()
{
  digitalWrite(5, HIGH);      //buzzer3 on
  delay(700);                 //on for 300 ms
  digitalWrite(5, LOW);       //buzzer3 off
  delay(400);                 //wait for 100ms
}
void dash4()
{
  digitalWrite(6, HIGH);      //buzzer4 on
  delay(700);                 //on for 300 ms
  digitalWrite(6, LOW);       //buzzer4 off
  delay(400);                 //wait for 100ms
}
void dash5()
{
  digitalWrite(7, HIGH);      //buzzer5 on
  delay(700);                 //on for 300 ms
  digitalWrite(7, LOW);       //buzzer5 off
  delay(400);                 //wait for 100ms
}
void translate()
{
  switch (i)
  {
    case 'A':                         //if it is A
      dot1();                     //do a dot
      delay(space);               //wait
      dash2();                    //do a dash
      delay(space);
      Serial.println("this is a");//wait
      break;
    case 'B':
      dash1();
      dot2();
      delay(space);
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'C':
      dash1();
      dot2();
      delay(space);
      dash3();
      dot4();
      delay(space);
      break;
    case 'D':
      dash1();
      dot2();
      delay(space);
      dot3();
      delay(space);
      break;
    case 'E':
      dot1();
      delay(space);
      break;
    case 'F':
      dot1();
      delay(space);
      dot2();
      dash3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'G':
      dash1();
      delay(space);
      dash2();
      dot3();
      delay(space);
      break;
    case 'H':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'I':
      dot1();
      delay(space);
      dot2();
      delay(space);
      break;
    case 'J':
      dot1();
      dash2();
      delay(space);
      dash3();
      delay(space);
      dash4();
      delay(space);
      break;
    case 'K':
      dash1();
      dot2();
      dash3();
      delay(space);
      break;
    case 'L':
      dot1();
      dash2();
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'M':
      dash1();
      delay(space);
      dash2();
      delay(space);
      break;
    case 'N':
      dash1();
      dot2();
      delay(space);
      break;
    case 'O':
      dash1();
      delay(space);
      dash2();
      delay(space);
      dash3();
      delay(space);
      break;
    case 'P':
      dot1();
      dash2();
      delay(space);
      dash3();
      dot4();
      delay(space);
      break;
    case 'Q':
      dash1();
      delay(space);
      dash2();
      dot3();
      dash4();
      delay(space);
      break;
    case 'R':
      dot1();
      dash2();
      dot3();
      delay(space);
      break;
    case 'S':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      break;
    case 'T':
      dash1();
      delay(space);
      break;
    case 'U':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dash3();
      delay(space);
      break;
    case 'V':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      dash4();
      delay(space);
      break;
    case 'W':
      dot1();
      dash2();
      delay(space);
      dash3();
      delay(space);
      break;
    case 'X':
      dash1();
      dot2();
      delay(space);
      dot3();
      dash4();
      delay(space);
      break;
    case 'Y':
      dash1();
      dot2();
      dash3();
      delay(space);
      dash4();
      delay(space);
      break;
    case 'Z':
      dash1();
      delay(space);
      dash2();
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'a':                       //if it is a
      dot1();                    //do a dot
      delay(space);             //wait
      dash2();                  //do a dash
      delay(space);             //wait
      break;
    case 'b':
      dash1();
      dot2();
      delay(space);
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'c':
      dash1();
      dot2();
      delay(space);
      dash3();
      dot4();
      delay(space);
      break;
    case 'd':
      dash1();
      dot2();
      delay(space);
      dot3();
      delay(space);
      break;
    case 'e':
      dot1();
      delay(space);
      break;
    case 'f':
      dot1();
      delay(space);
      dot2();
      dash3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'g':
      dash1();
      delay(space);
      dash2();
      dot3();
      delay(space);
      break;
    case 'h':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'i':
      dot1();
      delay(space);
      dot2();
      delay(space);
      break;
    case 'j':
      dot1();
      dash2();
      delay(space);
      dash3();
      delay(space);
      dash4();
      delay(space);
      break;
    case 'k':
      dash1();
      dot2();
      dash3();
      delay(space);
      break;
    case 'l':
      dot1();
      dash2();
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case 'm':
      dash1();
      delay(space);
      dash2();
      delay(space);
      break;
    case 'n':
      dash1();
      dot2();
      delay(space);
      break;
    case 'o':
      dash1();
      delay(space);
      dash2();
      delay(space);
      dash3();
      delay(space);
      break;
    case 'p':
      dot1();
      dash2();
      delay(space);
      dash3();
      dot4();
      delay(space);
      break;
    case 'q':
      dash1();
      delay(space);
      dash2();
      dot3();
      dash4();
      delay(space);
      break;
    case 'r':
      dot1();
      dash2();
      dot3();
      delay(space);
      break;
    case 's':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      break;
    case 't':
      dash1();
      delay(space);
      break;
    case 'u':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dash3();
      delay(space);
      break;
    case 'v':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      dash4();
      delay(space);
      break;
    case 'w':
      dot1();
      dash2();
      delay(space);
      dash3();
      delay(space);
      break;
    case 'x':
      dash1();
      dot2();
      delay(space);
      dot3();
      dash4();
      delay(space);
      break;
    case 'y':
      dash1();
      dot2();
      dash3();
      delay(space);
      dash4();
      delay(space);
      break;
    case 'z':
      dash1();
      delay(space);
      dash2();
      dot3();
      delay(space);
      dot4();
      delay(space);
      break;
    case '1':
      Serial.println("1");
      break;
    case'2':
      dot1();
      delay(space);
      dot2();
      dash3();
      delay(space);
      dash4();
      delay(space);
      dash5();
      delay(space);
      break;
    case'3':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      dash4();
      delay(space);
      dash5();
      delay(space);
      break;
    case'4':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      dot4();
      dash5();
      delay(space);
      break;
    case'5':
      dot1();
      delay(space);
      dot2();
      delay(space);
      dot3();
      delay(space);
      dot4();
      delay(space);
      dot5();
      delay(space);
      break;
    case'6':
      dash1();
      dot2();
      delay(space);
      dot3();
      delay(space);
      dot4();
      delay(space);
      dot5();
      delay(space);
      break;
    case'7':
      dash1();
      delay(space);
      dash2();
      dot3();
      delay(space);
      dot4();
      delay(space);
      dot5();
      delay(space);
      break;
    case'8':
      dash1();
      delay(space);
      dash2();
      delay(space);
      dash3();
      dot4();
      delay(space);
      dot5();
      delay(space);
      break;
    case'9':
      dash1();
      delay(space);
      dash2();
      delay(space);
      dash3();
      delay(space);
      dash4();
      dot5();
      delay(space);
      break;
    case'0':
      
      Serial.println("0");
      break;
    case ' ':
      delay(1500);
      break;
    default:
      delay(250);
      break;
  }
}
void doString()
{ //parse the string
  mcodelength = mcode.length();         //get the length of the string
  for (int x = 0; x <= mcodelength; x++)
  { //repeat until reach end of the string
    i = mcode.charAt(x);              //get character at pos x
    translate();                      //translate chracter to morse code
  }
}

void loop()
{
  while (Serial.available())
  { //when something comes through serial
    char inchar = (char)Serial.read();      //get the new byte
    mcode += inchar;                        //add it to mcode
    if (inchar == '\n')
    { //if recieve as CR
      Serial.println(mcode);
      doString();                            //process the string
    }
  }
  delay(1000);                              //delay between strings
  mcode = "";                               //reset string
}
