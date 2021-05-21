#include <SPI.h>
#include <Ethernet.h>

byte mac[] = {  0x00, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };

void setup() {
  Serial.begin(9600);

  // disable SD SPI
  pinMode(0,OUTPUT);
  digitalWrite(0,HIGH);
  pinMode(1,OUTPUT);
  digitalWrite(1,HIGH);

  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  pinMode(3,OUTPUT);
  digitalWrite(3,HIGH);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);
  pinMode(5,OUTPUT);
  digitalWrite(5,HIGH);
  pinMode(6,OUTPUT);
  digitalWrite(6,HIGH);
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
  pinMode(9,OUTPUT);
  digitalWrite(9,HIGH);
  pinMode(10,OUTPUT);
  digitalWrite(10,HIGH);
  pinMode(11,OUTPUT);
  digitalWrite(11,HIGH);
  pinMode(12,OUTPUT);
  digitalWrite(12,HIGH);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);

  pinMode(A0,OUTPUT);
  digitalWrite(A0,HIGH);
  pinMode(A1,OUTPUT);
  digitalWrite(A1,HIGH);
  pinMode(A2,OUTPUT);
  digitalWrite(A2,HIGH);
  pinMode(A3,OUTPUT);
  digitalWrite(A3,HIGH);
  pinMode(A4,OUTPUT);
  digitalWrite(A4,HIGH);
  pinMode(A5,OUTPUT);
  digitalWrite(A5,HIGH);
}

void loop() {
}
