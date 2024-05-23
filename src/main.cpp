#include <Arduino.h>

#define leds1 10
#define leds2 9
#define leds3 8
#define leds4 7
#define button 6
#define time 2000
int buttonState;
int ran;

void setup() {
  // put your setup code here, to run once:
  pinMode(leds1, OUTPUT);
  pinMode(leds2, OUTPUT);
  pinMode(leds3, OUTPUT);
  pinMode(leds4, OUTPUT);
  pinMode(button, INPUT);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  if (buttonState == HIGH){
    ran = random(1, 7);
    if (ran == 1){
      digitalWrite (leds4, HIGH);
      delay (time);
    }
    if (ran == 2){
      digitalWrite (leds1, HIGH);
      delay (time);
    }
    if (ran == 3){
      digitalWrite (leds3, HIGH);
      digitalWrite (leds4, HIGH);
      delay (time);
    }
    if (ran == 4){
      digitalWrite (leds1, HIGH);
      digitalWrite (leds3, HIGH);
      delay (time);
    }
    if (ran == 5){
      digitalWrite (leds1, HIGH);
      digitalWrite (leds3, HIGH);
      digitalWrite (leds4, HIGH);
      delay (time);
   }
   if (ran == 6){
      digitalWrite (leds1, HIGH);
      digitalWrite (leds2, HIGH);
      digitalWrite (leds3, HIGH);
      delay (time);
   }
  }
  digitalWrite (leds1, LOW);
  digitalWrite (leds2, LOW);
  digitalWrite (leds3, LOW);
  digitalWrite (leds4, LOW);
}
