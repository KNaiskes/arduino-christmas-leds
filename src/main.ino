const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const int ledSize = sizeof(ledPins);

void allOnOff() {
  const int SLEEPTIME = 1000;

  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(SLEEPTIME);

  for (int i = 0; i < ledSize; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(SLEEPTIME);
}

void setup() {
  for (int i = 0; i < ledSize; i++) {
   pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  allOnOff();
}
