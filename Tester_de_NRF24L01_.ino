// nRF24L01+ Active Test
#include <SPI.h>
#include <RF24.h>
#include "printf.h"
#define RF_CS 9
#define RF_CSN 10
RF24 radio(RF_CS, RF_CSN);
void setup() {
  Serial.begin(9600);
  printf_begin();
  radio.begin();
  radio.printDetails();
}
void loop() {

}
