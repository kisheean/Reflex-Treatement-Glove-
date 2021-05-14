#include <Servo.h>

Servo myservo_0;
Servo myservo_1;
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;

int flexpin0 = A0;
int flexpin1 = A1;
int flexpin2 = A2;
int flexpin3 = A3;
int flexpin4 = A4;

int val0;
int val1;
int val2;
int val3;
int val4;

void setup() {
  myservo_0.attach(3);
  myservo_1.attach(5);
  myservo_2.attach(6);
  myservo_3.attach(10);
  myservo_4.attach(11);
  Serial.begin(9600);
}

void loop() {
  val0 = analogRead(flexpin0);
  Serial.println("Flexpin0: " + String(val0));
  val0 = map(val0, 780, 1023, 0, 180);
  myservo_0.write(val0);
  delay(10);
  
  val1 = analogRead(flexpin1);
  Serial.println("Flexpin1: " + String(val1));
  val1 = map(val1, 780, 1023, 0, 180);
  myservo_1.write(val1);
  delay(10);
  
  val2 = analogRead(flexpin2);
  Serial.println("Flexpin2: " + String(val2));
  val2 = map(val2, 780, 1023, 0, 180);
  myservo_2.write(val2);
  delay(10);
  
  val3 = analogRead(flexpin3);
  Serial.println("Flexpin3: " + String(val3));
  val3 = map(val3, 780, 1023, 0, 180);
  myservo_3.write(val3);
  delay(10);
  
  val4 = analogRead(flexpin4);
  Serial.println("Flexpin4: " + String(val4));
  val4 = map(val4, 780, 1023, 0, 180);
  myservo_4.write(val4);
  delay(10);

  Serial.println("----------------------");

  
 

 
  
}
