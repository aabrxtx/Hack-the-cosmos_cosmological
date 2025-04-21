#include <Servo.h>
const int ENA = 5;
const int ENB = 6;
const int IN1 = 7;
const int IN2 = 8;
const int IN3 = 9;
const int IN4 = 10;
const int TRIG = 11;
const int ECHO = 12;
const int SERVO_PIN = 3;
Servo sortingServo;
void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, OUTPUT);
  sortingServo.attach(SERVO_PIN);
  sortingServo.write(90);
}
void loop() {
  long duration, distance;
  digitalWrite (TRIG, LOW);
  delayMicroseconds (2);
  digitalWrite (TRIG, HIGH);
  delayMicroseconds (10);
  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;
  if (distance<15) {
    stopMotors();
    sortingServo.write(30);
    delay(1000);
    sortingServo.write(90);
    delay(500);
  }
  else {
    moveForward();
  }
}
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 200);
  analogWrite(ENB, 200);
}
void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}