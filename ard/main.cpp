#include <LedControl.h>
#include <RTClib.h>
#include <Wire.h>
#include <time.h>
#include<Timezone.h>


const int DATA_PIN = 9;   // connects to DIN on the module
const int CLK_PIN  = 11;   // connects to CLK on the module
const int CS_PIN   = 10;   // connects to CS  on the module
RTC_DS3231 RTC;
const int NUM_DEVICES = 4;

const char msg0[] PROGMEM = "GOOD";
const char msg1[] PROGMEM = "LUCK";
const char msg2[] PROGMEM = "FRIEND";

const char* const messages[] PROGMEM = { msg0, msg1, msg2 };

char buffer[10];

const byte font5x7[][5] PROGMEM = {
  { B01111110, B10000101, B10001001, B10010001, B01111110 }, // 0
  { B00000000, B10000000, B11111111, B10000010, B00000000 }, // 1
  { B10000010, B10000101, B10001001, B10010001, B11100010 }, // 2
  { B01110110, B10001001, B10001001, B10000001, B01000010 }, // 3
  { B00010000, B11111111, B00010010, B00010100, B00011000 }, // 4
  { B01110001, B10001001, B10001001, B10001001, B01001111 }, // 5
  { B01110010, B10001001, B10001001, B10001001, B01111110 }, // 6
  { B00000011, B00000101, B00001001, B11110001, B00000001 }, // 7
  { B01110110, B10001001, B10001001, B10001001, B01110110 }, // 8
  { B01111110, B10001001, B10001001, B10001001, B01000110 }, // 9
  { B00000000, B00100100, B00000000, B00100100, B00000000 }  // :
};
const byte fontLetters[][5] PROGMEM = {
  { B01111110, B00001001, B00001001, B00001001, B01111110 }, // A
  { B00110110, B01001001, B01001001, B01001001, B01111111 }, // B
  { B00100010, B01000001, B01000001, B01000001, B00111110 }, // C
  { B00011100, B00100010, B01000001, B01000001, B01111111 }, // D
  { B01000001, B01001001, B01001001, B01001001, B01111111 }, // E
  { B00000001, B00001001, B00001001, B00001001, B01111111 }, // F
  { B01111010, B01001001, B01001001, B01000001, B00111110 }, // G
  { B01111111, B00001000, B00001000, B00001000, B01111111 }, // H
  { B00000000, B01000001, B01111111, B01000001, B00000000 }, // I
  { B00000001, B00111111, B01000001, B01000000, B00100000 }, // J
  { B01000001, B00100010, B00010100, B00001000, B01111111 }, // K
  { B01000000, B01000000, B01000000, B01000000, B01111111 }, // L
  { B01111111, B00000010, B00011100, B00000010, B01111111 }, // M
  { B01111111, B00010000, B00001000, B00000100, B01111111 }, // N
  { B00111110, B01000001, B01000001, B01000001, B00111110 }, // O
  { B00000110, B00001001, B00001001, B00001001, B01111111 }, // P
  { B01011110, B00100001, B01010001, B01000001, B00111110 }, // Q
  { B01000110, B00101001, B00011001, B00001001, B01111111 }, // R
  { B00110010, B01001001, B01001001, B01001001, B01000110 }, // S
  { B00000001, B00000001, B01111111, B00000001, B00000001 }, // T
  { B00111111, B01000000, B01000000, B01000000, B00111111 }, // U
  { B00011111, B00100000, B01000000, B00100000, B00011111 }, // V
  { B01111111, B00100000, B00011000, B00100000, B01111111 }, // W
  { B01000001, B00100010, B00011100, B00100010, B01000001 }, // X
  { B00000011, B00000100, B01111000, B00000100, B00000011 }, // Y
  { B01000011, B01000101, B01001001, B01010001, B01100001 }  // Z
};



const byte dot PROGMEM = { B00000000 };

TimeChangeRule myDST = {"CEST", Last, Sun, Mar, 2, 120}; // UTC+2 in summer
TimeChangeRule mySTD = {"CET", Last, Sun, Oct, 3, 60};   // UTC+1 in winter
Timezone myTZ(myDST, mySTD);


LedControl lc = LedControl(DATA_PIN, CLK_PIN, CS_PIN, NUM_DEVICES);

int val = 0;
int dev = 0;
 
volatile unsigned long lastTrig = 0;
volatile bool heardSound= false;

unsigned long lastUpdate = 0;
const unsigned long interval = 1000;

void setup() {
  Serial.begin(9600);
  RTC.begin();
  Wire.begin();
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), soundInterrupt, FALLING);

  /*
  DateTime now = RTC.now();
  setTime(now.hour(), now.minute(), now.second(), now.day(), now.month(), now.year());

  

  DateTime compileTime = DateTime(F(__DATE__), F(__TIME__));


  time_t utc = compileTime.unixtime() - 7200;


  RTC.adjust(DateTime(utc));*/


  pinMode(7,INPUT);
  // Turn on each MAX7219 one by one:
  for (int device = 0; device < NUM_DEVICES; device++) {
    lc.shutdown(device, false);    // Wake up display
    lc.setIntensity(device, 1);    // Set brightness (0–15)
    lc.clearDisplay(device);       // Clear all LEDs on this device
  }
}

void soundInterrupt()
{
   unsigned long now = micros();  
  if (now - lastTrig > 200000) {  
    lastTrig= now;
    heardSound = true;
  } 
}

void drawDigit(int digit,int startCol)
{
 const byte (*choice)[5];


  if (digit < 10) {
    choice = font5x7; 
  } else {
    choice = fontLetters; 
    digit -= 'A';
  }

  for (int col = 0; col < 5; col++) {
    byte dig = pgm_read_byte(&(choice[digit][col]));
    int colOffset = startCol + col;
    int device = colOffset / 8;
    int devCol = colOffset % 8;
    lc.setColumn(device, devCol, dig);
  }
 
}

void clearDisplay()
{
    for (int device = 0; device < NUM_DEVICES; device++) {
    lc.shutdown(device, false);    // Wake up display
    lc.setIntensity(device, 1);    // Set brightness (0–15)
    lc.clearDisplay(device);      
    } 
}

void drawSplitDigit(int digit,int startCol,int breakCol)
{
  const byte (*choice)[5];


  if (digit < 10) {
    choice = font5x7; 
  } else {
    choice = fontLetters; 
    digit -= 'A';
  }
  
  for(int col = 0; col<5;col++)
  {
    byte dig = pgm_read_byte(&(choice[digit][col]));
    int colOffset = startCol+col;
    int device = colOffset/8;
    int devCol = colOffset%8;
    if(breakCol>col)
    {
      device +=1;
      devCol +=(8-breakCol);
    } else
    { 
      devCol -=breakCol;
    }
     lc.setColumn(device, devCol, dig);
  }
}


void loop() {
  unsigned long now = millis();

  if(!heardSound)
  {
    if(now-lastUpdate>= interval)
    {
      lastUpdate=now;
      DateTime time = RTC.now();
      time_t local = myTZ.toLocal(time.unixtime());
      int hours = hour(local);
      int minutes = minute(local);
      int seconds = second(local);

      drawDigit(hours / 10,3);
      drawSplitDigit(hours % 10,0,2);

    
      lc.setColumn(1, 5, dot);
    
      
      drawDigit(minutes/10,8);
      drawDigit(minutes % 10,19);

      lc.setColumn(2, 2, dot);

      drawSplitDigit(seconds/10,16,3);
      drawDigit(seconds%10,24);
    }
  } else {
    clearDisplay();
    strcpy_P(buffer, (PGM_P)pgm_read_word(&messages[0])); // "HELL"
    int places[] = {3,0,9,8,23};
    int breakPoints[5] = {0};
    breakPoints[1] = 2;
    breakPoints[3] = 4; 
    for(int index = 0;index<4;index++)
    {
      if(index != 1 && index != 3)
      {
        drawDigit(buffer[index],places[index]);
      } else {
        drawSplitDigit(buffer[index],places[index],breakPoints[index]);
      }
    }
    
    delay(5000);
    heardSound=false;
  }
}

