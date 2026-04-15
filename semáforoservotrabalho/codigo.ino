// C++ code
//
#include <Servo.h>

int botao2 = 0;

int botao3 = 0;

int botao4 = 0;

int botao5 = 0;

int portaoesquerdo = 0;

int portaodireito = 0;

Servo servo_7;

Servo servo_6;

void setup()
{
  servo_7.attach(7);

  servo_6.attach(6);

  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
  pinMode(5, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);

  servo_7.write(90);
  servo_6.write(90);
  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
}

void loop()
{
  botao2 = digitalRead(2);
  botao5 = digitalRead(5);
  botao3 = digitalRead(3);
  botao4 = digitalRead(4);
  portaoesquerdo = digitalRead(7);
  portaodireito = digitalRead(6);
  if (botao2 == HIGH) {
    digitalWrite(10, HIGH);
    digitalWrite(12, LOW);
    servo_7.write(0);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
  } else {
  }
  if (botao5 == HIGH) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    servo_6.write(0);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
  } else {
  }
  if (botao3 == HIGH) {
    digitalWrite(12, LOW);
    digitalWrite(10, HIGH);
    servo_7.write(0);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    servo_6.write(0);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
  } else {
  }
  if (botao4 == HIGH) {
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    servo_6.write(90);
    servo_7.write(90);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(12, HIGH);
  } else {
  }
  if (servo_7.read() < 90) {
    if (servo_6.read() < 90) {
      digitalWrite(11, HIGH);
    }
  }
}
