#define HIGH 0x1
#define LOW 0x0

// 0
void writeNumerZeroHigh() {
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
}

void writeNumerZeroLow() {
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

// 1
void writeNumberOneHigh() {
  digitalWrite(12, HIGH);
  digitalWrite(6, HIGH);
}

void writeNumberOneLow() {
  digitalWrite(6, LOW);
  digitalWrite(12, LOW);
}

// 2
void writeNumberTwoHigh() {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void writeNumberTwoLow() {
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

// 3
void writeNumberThreeHigh() {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
}

void writeNumberThreeLow() {
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}

// 4
void writeNumberFourHigh() {
  digitalWrite(12, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void writeNumberFourLow() {
  digitalWrite(12, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}

// 5
void writeNumerFiveHigh() {
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
}

void writeNumerFiveLow() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}

// 6
void writeNumerSixHigh() {
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
}

void writeNumerSixLow() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}

// 7
void writeNumberSevenHigh() {
  digitalWrite(12, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
}

void writeNumberSevenLow() {
  digitalWrite(12, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}

// 8
void writeNumerEightHigh() {
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
}

void writeNumerEightLow() {
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

// 9
void writeNumerNineHigh() {
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
}

void writeNumerNineLow() {
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

void putOffAllNumbers() {
  writeNumerZeroLow();
  writeNumberOneLow();
  writeNumberTwoLow();
  writeNumberThreeLow();
  writeNumberFourLow();
  writeNumerFiveLow();
  writeNumerSixLow();
  writeNumberSevenLow();
  writeNumerEightLow();
  writeNumerNineLow();
}

// this method show a simple animation in a seven-segment display
void simpleAnimation(int delayTime) {
  //13
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(13, LOW);
  delay(delayTime);

  //12
  digitalWrite(12, HIGH);
  delay(delayTime);
  digitalWrite(12, LOW);
  delay(delayTime);

  //11
  digitalWrite(11, HIGH);
  delay(delayTime);
  digitalWrite(11, LOW);
  delay(delayTime);

  //10
  digitalWrite(10, HIGH);
  delay(delayTime);
  digitalWrite(10, LOW);
  delay(delayTime);

  //9
  digitalWrite(9, HIGH);
  delay(delayTime);
  digitalWrite(9, LOW);
  delay(delayTime);

  //8
  digitalWrite(8, HIGH);
  delay(delayTime);
  digitalWrite(8, LOW);
  delay(delayTime);

  //7
  digitalWrite(7, HIGH);
  delay(delayTime);
  digitalWrite(7, LOW);
  delay(delayTime);

  //6
  digitalWrite(6, HIGH);
  delay(delayTime);
  digitalWrite(6, LOW);
  delay(delayTime);
}

// method to show a numbers animation from 0 to 9
void showAnimationNumbers(int delayTime) {
  // 0
  writeNumerZeroHigh();
  delay(delayTime);
  writeNumerZeroLow();
  delay(delayTime);

  // 1
  writeNumberOneHigh();
  delay(delayTime);
  writeNumberOneLow();
  delay(delayTime);

  // 2
  writeNumberTwoHigh();
  delay(delayTime);
  writeNumberTwoLow();
  delay(delayTime);

  // 3
  writeNumberThreeHigh();
  delay(delayTime);
  writeNumberThreeLow();
  delay(delayTime);

  // 4
  writeNumberFourHigh();
  delay(delayTime);
  writeNumberFourLow();
  delay(delayTime);

  // 5
  writeNumerFiveHigh();
  delay(delayTime);
  writeNumerFiveLow();
  delay(delayTime);

  // 6
  writeNumerSixHigh();
  delay(delayTime);
  writeNumerSixLow();
  delay(delayTime);

  // 7
  writeNumberSevenHigh();
  delay(delayTime);
  writeNumberSevenLow();
  delay(delayTime);

  // 8
  writeNumerEightHigh();
  delay(delayTime);
  writeNumerEightLow();
  delay(delayTime);

  // 9
  writeNumerNineHigh();
  delay(delayTime);
  writeNumerNineLow();
  delay(delayTime);
}