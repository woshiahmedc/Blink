#include <Arduino.h>

// The built-in LED on the Blue Pill is on Pin PC13
#define LED_PIN PC13 

void setup() {
  // Configure the pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, LOW);  // Turn the LED ON (Active Low)
  delay(1000);                 // Wait for 1000 milliseconds (1 second)
  
  digitalWrite(LED_PIN, HIGH); // Turn the LED OFF
  delay(1000);                 // Wait for 1 second
}