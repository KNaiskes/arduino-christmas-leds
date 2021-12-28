const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const int ledSize = sizeof(ledPins);
const int iterations = 2;
const int SLEEPTIME = 1000;

void allOnOff() {
  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(SLEEPTIME);

  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(SLEEPTIME);
}

void onOffAfterTheOther() {
  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(SLEEPTIME);
  }
  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(SLEEPTIME);
  }
}

void middleRightAndLeft() {
  for (int i = ledSize; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(SLEEPTIME);
  }
  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(SLEEPTIME);
  }
}

void onOffByTwo() {
  for (int i = 0; i < ledSize; i+=2) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(SLEEPTIME);

  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(SLEEPTIME);
  // the other half
  for (int i = 1; i < ledSize; i+=2) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(SLEEPTIME);

  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(SLEEPTIME);
}

void randomPin() {
  int pin = random(ledSize);
  digitalWrite(ledPins[pin], HIGH);
  delay(1000);
  digitalWrite(ledPins[pin], LOW);
  delay(1000);
}

void setup() {
  for (int i = 0; i < ledSize; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
    for (int i = 0; i < iterations; i++) {
    allOnOff();
    }
    delay(SLEEPTIME);
    for (int i = 0; i < iterations; i++) {
    onOffAfterTheOther();
    }
    delay(SLEEPTIME);
    for (int i = 0; i < iterations; i++) {
    middleRightAndLeft();
    }
    delay(SLEEPTIME);
    for (int i = 0; i < iterations; i++) {
      onOffByTwo();
    }
    delay(SLEEPTIME);
    for (int i = 0; i < iterations; i++) {
      randomPin();
    }
    delay(SLEEPTIME);
}
