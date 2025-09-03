int redPin = 11;
int bluePin = 10;
int greenPin = 8;
int buttonPin = 7;
int wPin = 6;

int ledState = LOW;
byte brightness = 0;
byte fadeIncrement = 1;
int toggleState = LOW;

unsigned long currentMillis = 0;

unsigned long blinkPreviousMillis = 0;
unsigned long blinkPreviousMillis1 = 0;  
unsigned long fadePreviousMillis = 0;
unsigned long buttonPreviousMillis = 0;

const unsigned long blinkPeriod = 500;
const unsigned long blinkPeriod1 = 300;
const unsigned long fadePeriod = 10;
const unsigned long buttonPeriod = 100;

void blinkLED(){
  if(currentMillis - blinkPreviousMillis >= blinkPeriod){
    blinkPreviousMillis = currentMillis;

    if(ledState == LOW){
      ledState = HIGH;
    }
    else{
      ledState = LOW;
    }
    digitalWrite(redPin, ledState);
  }
}

void blinkLED1(){
  if(currentMillis - blinkPreviousMillis1 >= blinkPeriod1){  
    blinkPreviousMillis1 = currentMillis;

    if(ledState == LOW){
      ledState = HIGH;
    }
    else{
      ledState = LOW;
    }
    digitalWrite(wPin, ledState);
  }
}

void fadeLED(){
  if(currentMillis - fadePreviousMillis >= fadePeriod){
    fadePreviousMillis = currentMillis;

    analogWrite(bluePin, brightness);
    brightness += fadeIncrement;
  }
}

void toggleLED(){
  if(currentMillis - buttonPreviousMillis >= buttonPeriod){
    buttonPreviousMillis = currentMillis;

    if(digitalRead(buttonPin) == LOW){
      toggleState = HIGH;
    }
    else{
      toggleState = LOW;
    }

    digitalWrite(greenPin, toggleState);
  }
}


void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(wPin, OUTPUT);
}

void loop(){
  currentMillis = millis();
  blinkLED();
  fadeLED();
  toggleLED();
  blinkLED1();
}