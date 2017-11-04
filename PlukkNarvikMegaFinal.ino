#include <AddicoreRFID.h>

const int  buttonPin = 22;    // LedPinBryter
const int ledPin = 46;
 
const int  buttonPin2 = 23;    // LedPinBryter2
const int ledPin2 = 47;  

const int  buttonPin3 = 24;    // LedPinBryter3
const int ledPin3 = 48;  

const int  buttonPin4 = 25;    // LedPinBryter3
const int ledPin4 = 49;  

const int  buttonPin5 = 26;    // LedPinBryter
const int ledPin5 = 50;
 
const int  buttonPin6 = 27;    // LedPinBryter2
const int ledPin6 = 51;  

const int  buttonPin7 = 28;    // LedPinBryter3
const int ledPin7 = 52;  

const int  buttonPin8 = 29;    // LedPinBryter3
const int ledPin8 = 53;  

char incomingOption;


// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

int buttonPushCounter2 = 0;   // counter for the number of button presses
int buttonState2 = 0;         // current state of the button
int lastButtonState2 = 0;     // previous state of the button

int buttonPushCounter3 = 0;   // counter for the number of button presses
int buttonState3 = 0;         // current state of the button
int lastButtonState3 = 0;     // previous state of the button

int buttonPushCounter4 = 0;   // counter for the number of button presses
int buttonState4 = 0;         // current state of the button
int lastButtonState4 = 0;     // previous state of the button

int buttonPushCounter5 = 0;   // counter for the number of button presses
int buttonState5 = 0;         // current state of the button
int lastButtonState5 = 0;     // previous state of the button

int buttonPushCounter6 = 0;   // counter for the number of button presses
int buttonState6 = 0;         // current state of the button
int lastButtonState6 = 0;     // previous state of the button

int buttonPushCounter7 = 0;   // counter for the number of button presses
int buttonState7 = 0;         // current state of the button
int lastButtonState7 = 0;     // previous state of the button

int buttonPushCounter8 = 0;   // counter for the number of button presses
int buttonState8 = 0;         // current state of the button
int lastButtonState8 = 0;     // previous state of the button


void setup() {

  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
 
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin2, OUTPUT);

  pinMode(buttonPin3, INPUT);
  pinMode(ledPin3, OUTPUT);

  pinMode(buttonPin4, INPUT);
  pinMode(ledPin4, OUTPUT);

  pinMode(buttonPin5, INPUT);
  pinMode(ledPin5, OUTPUT);
 
  pinMode(buttonPin6, INPUT);
  pinMode(ledPin6, OUTPUT);

  pinMode(buttonPin7, INPUT);
  pinMode(ledPin7, OUTPUT);

  pinMode(buttonPin8, INPUT);
  pinMode(ledPin8, OUTPUT);

  Serial.begin(57600);
}

void SlaAvBryter1()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
   digitalWrite(ledPin, LOW);
  
   Serial.print("0");
   buttonPushCounter = 0;
    } else {
    }
    delay(50);
  }
 
  lastButtonState = buttonState;
  
}

void SlaAvBryter2()
{
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 != lastButtonState2) {
    if (buttonState2 == HIGH) {
      buttonPushCounter2++;
   digitalWrite(ledPin2, LOW);
   Serial.print("0");
    buttonPushCounter2 = 0;
    } else {
    }
    delay(50);
  }
    
  lastButtonState2 = buttonState2;
}

void SlaAvBryter3()
{
  buttonState3 = digitalRead(buttonPin3);
  if (buttonState3 != lastButtonState3) {
    if (buttonState3 == HIGH) {
      buttonPushCounter3++;
   digitalWrite(ledPin3, LOW);
   Serial.print("0");
    buttonPushCounter3 = 0;
    } else {
    }
    delay(50);
  }
 
  lastButtonState3 = buttonState3;
}

void SlaAvBryter4()
{
  buttonState4 = digitalRead(buttonPin4);
  if (buttonState4 != lastButtonState4) {
    if (buttonState4 == HIGH) {
      buttonPushCounter4++;
   digitalWrite(ledPin4, LOW);
   Serial.print("0");
    buttonPushCounter4 = 0;
    } else {
    }
    delay(50);
  }
  
  lastButtonState4 = buttonState4;
}

void SlaAvBryter5()
{
  buttonState5 = digitalRead(buttonPin5);
  if (buttonState5 != lastButtonState5) {
    if (buttonState5 == HIGH) {
      buttonPushCounter5++;
   digitalWrite(ledPin5, LOW);
   Serial.print("0");
    buttonPushCounter5 = 0;
    } else {
    }
    delay(50);
  }
  
  lastButtonState5 = buttonState5;
}

void SlaAvBryter6()
{
  buttonState6 = digitalRead(buttonPin6);
  if (buttonState6 != lastButtonState6) {
    if (buttonState6 == HIGH) {
      buttonPushCounter6++;
   digitalWrite(ledPin6, LOW);
   Serial.print("0");
    buttonPushCounter6 = 0;
    } else {
    }
    delay(50);
  }
  
  lastButtonState6 = buttonState6;
}

void SlaAvBryter7()
{
  buttonState7 = digitalRead(buttonPin7);
  if (buttonState7 != lastButtonState7) {
    if (buttonState7 == HIGH) {
      buttonPushCounter7++;
   digitalWrite(ledPin7, LOW);
   Serial.print("0");
    buttonPushCounter7 = 0;
    } else {
    }
    delay(50);
  }
  
  lastButtonState7 = buttonState7;
}

void SlaAvBryter8()
{
  buttonState8 = digitalRead(buttonPin8);
  if (buttonState8 != lastButtonState8) {
    if (buttonState8 == HIGH) {
      buttonPushCounter8++;
   digitalWrite(ledPin8, LOW);
   Serial.print("0");
    buttonPushCounter8 = 0;
    } else {
    }
    delay(50);
  }
  
  lastButtonState8 = buttonState8;
}

void ledA()
{
  digitalWrite(ledPin, HIGH);

}
void ledB()
{
  digitalWrite(ledPin2, HIGH);
}
void ledC()
{
  digitalWrite(ledPin3, HIGH);
}
void ledD()
{
  digitalWrite(ledPin4, HIGH);
}
void ledE()
{
  digitalWrite(ledPin5, HIGH);
}
void ledF()
{
  digitalWrite(ledPin6, HIGH);
}
void ledH()
{
  digitalWrite(ledPin7, HIGH);
}
void ledG()
{
  digitalWrite(ledPin8, HIGH);
}

void loop() {

incomingOption = Serial.read();
  if (incomingOption == '1')
 {
ledA();
 }
 else if(incomingOption == '2')
{
ledB();
}
 else if(incomingOption == '3')
{
ledC();
}
 else if(incomingOption == '4')
{
ledD();
}
 else if(incomingOption == '5')
{
ledE();
}
 else if(incomingOption == '6')
{
ledF();
}
 else if(incomingOption == '7')
{
ledG();
}
 else if(incomingOption == '8')
{
ledH();
}
else
{
 
}
 SlaAvBryter1();
 SlaAvBryter2();
 SlaAvBryter3();
 SlaAvBryter4();
 SlaAvBryter5();
 SlaAvBryter6();
 SlaAvBryter7();
 SlaAvBryter8();
}
