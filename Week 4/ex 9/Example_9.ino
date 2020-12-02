const int LED1 = 9;
const long on1 = 781;
const long off1 = 515; 

const int LED2 = 8;
const long on2 = 2014; 
const long off2 = 1348; 

const int LED3 = 7;
const long on3 = 343; 
const long off3 = 573; 

const int LED4 = 6;
const long on4 = 678; 
const long off4 = 1839;

const int LED5 = 5;
const long on5 = 342; 
const long off5 = 534;

const int LED6 = 4;
const long on6 = 1478; 
const long off6 = 326;

const int LED7 = 3;
const long on7 = 1859; 
const long off7 = 351;

const int LED8 = 2;
const long on8 = 777; 
const long off8 = 888;

int State[8] = {HIGH};

unsigned long previous[8];

void setup() {
  pinMode(LED1, OUTPUT); 
  digitalWrite(LED1, HIGH); 
  
  pinMode(LED2, OUTPUT); 
  digitalWrite(LED2, HIGH);

  pinMode(LED3, OUTPUT); 
  digitalWrite(LED3, HIGH);

  pinMode(LED4, OUTPUT); 
  digitalWrite(LED4, HIGH);

  pinMode(LED5, OUTPUT); 
  digitalWrite(LED5, HIGH);

  pinMode(LED6, OUTPUT); 
  digitalWrite(LED6, HIGH);

  pinMode(LED7, OUTPUT); 
  digitalWrite(LED7, HIGH);

  pinMode(LED8, OUTPUT); 
  digitalWrite(LED8, HIGH);

}

void loop() {

BlinkLED(LED1, on1, off1, 0, 0);
BlinkLED(LED2, on2, off2, 1, 1);
BlinkLED(LED3, on3, off3, 2, 2);
BlinkLED(LED4, on4, off4, 3, 3);
BlinkLED(LED5, on5, off5, 4, 4);
BlinkLED(LED6, on6, off6, 5, 5);
BlinkLED(LED7, on7, off7, 6, 6);
BlinkLED(LED8, on8, off8, 7, 7);

}

void BlinkLED (int led, int intervalON, int intervalOFF, int num, int array){
  if( State[num] == HIGH )
 {
    if( (millis()- previous[array]) >= intervalON){   
    State[num] = LOW; // change the state of LED
    previous[array] = millis(); // remember Current millis() time
    }
 }
 else
 {   
    if( (millis()- previous[array]) >= intervalOFF){     
    State[num] = HIGH; // change the state of LED
    previous[array] = millis(); // remember Current millis() time
    }

 }
  digitalWrite(led, State[num]);// turn the LED ON or OFF
}
