#include "numbers.c"
#include <Bonezegei_DHT11.h>
#include <Servo.h>

#define TRIGGER 4
#define ECHO 5
Bonezegei_DHT11 dht(3);
Servo myservo;
int pos = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);

  myservo.attach(2);
}

void loop() {
  simpleAnimation(200);
  // showAnimationNumbers(250);
  // sensorUltra();
  // sensorUltraAndSevenSegmentDisplay();
  // useDHT11();
  // useServo();
  // useServoWithHumidity();
}

void sensorUltra() {
  long duracion;
  long distancia;

  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(4);
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER, LOW);

  duracion = pulseIn(ECHO, HIGH);
  duracion = duracion / 2;

  distancia = duracion / 29;

  Serial.println(distancia);
  delay(50);
}

void sensorUltraAndSevenSegmentDisplay() {
  long duracion;
  long distancia;

  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(4);
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER, LOW);

  duracion = pulseIn(ECHO, HIGH);
  duracion = duracion / 2;

  distancia = duracion / 29;

  Serial.println(distancia);

  if (distancia >= 0 && distancia <= 10) {
    putOffAllNumbers();
    writeNumerZeroHigh();
  } else if (distancia >= 11 && distancia <= 20) {
    putOffAllNumbers();
    writeNumberOneHigh();
  } else if (distancia >= 21 && distancia <= 30) {
    putOffAllNumbers();
    writeNumberTwoHigh();
  } else if (distancia >= 31 && distancia <= 40) {
    putOffAllNumbers();
    writeNumberThreeHigh();
  } else {
    putOffAllNumbers();
  }

  delay(50);
}

void useDHT11() {
  if (dht.getData()) {
    float tempDeg = dht.getTemperature();
    float tempFar = dht.getTemperature(true);
    int hum = dht.getHumidity();
    if (tempDeg >= 1) {
      Serial.print("Temperatura Centigrados: ");
      Serial.println(tempDeg);

      Serial.print("Humedad: ");
      Serial.println(hum);
    }
  }
}

void useServo() {
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(20);
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);
    delay(20);
  }
}

void useServoWithHumidity() {
  int hum = dht.getHumidity();
  if (dht.getData()) {
    if (hum >= 1) {
      int hum2 = hum * 1.7;
      Serial.print(hum);
      Serial.print(" | ");
      Serial.println(hum2);
      myservo.write(hum2);
    }
  }
}
