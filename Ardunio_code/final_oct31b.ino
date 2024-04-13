#include <Servo.h>

Servo myServo;
const int trigPin = 10;
const int echoPin = 11;
const int greenLedPin = 6; // Green LED connected to digital pin 6
const int redLedPin = 7;   // Red LED connected to digital pin 7
const int buzzerPin =5;   // Buzzer connected to digital pin 8
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  myServo.attach(12);
}

void loop() {
  int startDegree = 15;
  int endDegree = 165;
  int totalTime = 7000; // 7 seconds for each direction
  int steps = endDegree - startDegree;
  int delayBetweenSteps = totalTime / steps;

  // Rotate from 15 to 165 degrees linearly
  for (int i = startDegree; i <= endDegree; i++) {
    myServo.write(i);
    delay(delayBetweenSteps);
    distance = calculateDistance();
    logData(i, distance);

    if (distance <= 5) {
      digitalWrite(redLedPin, HIGH); // Turn on the red LED if an object is within 10 cm
      digitalWrite(greenLedPin, HIGH); // Turn off the green LED
      digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    } else if (distance <= 40) {
      digitalWrite(redLedPin, HIGH); // Turn on the red LED if an object is within 40 cm
      digitalWrite(greenLedPin, LOW); // Turn off the green LED
      digitalWrite(buzzerPin, LOW); // Turn off the buzzer
    } else {
      digitalWrite(redLedPin, LOW); // Turn off the red LED if no object is within 40 cm
      digitalWrite(greenLedPin, HIGH); // Turn on the green LED
      digitalWrite(buzzerPin, LOW); // Turn off the buzuzzer
    }
  }

  // Rotate from 165 to 15 degrees linearly
  for (int i = endDegree; i >= startDegree; i--) {
    myServo.write(i);
    delay(delayBetweenSteps);
    distance = calculateDistance();
    logData(i, distance);

    if (distance <= 5) {
      digitalWrite(redLedPin, HIGH); // Turn on the red LED if an object is within 10 cm
      digitalWrite(greenLedPin, HIGH); // Turn off the green LED
      digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    } else if (distance <= 40) {
      digitalWrite(redLedPin, HIGH); // Turn on the red LED if an object is within 40 cm
      digitalWrite(greenLedPin, LOW); // Turn off the green LED
      digitalWrite(buzzerPin, LOW); // Turn off the buzzer
    } else {
      digitalWrite(redLedPin, LOW); // Turn off the red LED if no object is within 40 cm
      digitalWrite(greenLedPin, HIGH); // Turn on the green LED
      digitalWrite(buzzerPin, LOW); // Turn off the buzuzzer
    }
  }
}



void logData(int degree, int distance) {
  Serial.print(degree);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
}

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}
