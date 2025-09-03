#define LED2 12
#define BTN 4

void setup() {
  pinMode(LED2, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  // Check the button state
  if (digitalRead(BTN)) {
    // Button is not pressed, turn off LED2
    digitalWrite(LED2, LOW);
  } else {
    // Button is pressed, turn on LED2
    digitalWrite(LED2, HIGH);
  }
}
