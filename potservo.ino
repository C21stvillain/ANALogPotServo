#include <Servo.h>
Servo myServo;

int state = 0;
void setup() {
myServo.attach(9);

}
void loop() {
int potValue = analogRead(A0);
int angleValue = map(potValue, 0, 1023, 0, 180);
myServo.write(angleValue);
delay(10);
}
