#include <Servo.h>

Servo motor1;  // First motor for rotating boxes
Servo motor2;  // Second motor for 90-degree rotation
int currentPosition = 0;  // Current position of the first motor

void setup() {
  Serial.begin(9600);
  motor1.attach(8);  // Attach the first motor to pin 9
  motor2.attach(6); // Attach the second motor to pin 10
}

void loop() {
  if (Serial.available() > 0) {
    String predictionClass = Serial.readString();  // Read the class from serial

    // Rotate the first motor based on the prediction class
    if (predictionClass == "Non-Biodegradable") {
      rotateFirstMotorTo(0);  // Rotate to position for class N
    } else if (predictionClass == "Organic") {
      rotateFirstMotorTo(120);  // Rotate to position for class O
    } else if (predictionClass == "Recyclable") {
      rotateFirstMotorTo(240);  // Rotate to position for class R
    }

    // Rotate the second motor 90 degrees and back to zero
    delay(2000);
    rotateSecondMotor();
  }
}

// Function to rotate the first motor to the specified angle
void rotateFirstMotorTo(int angle) {
  if (angle != currentPosition) {
    motor1.attach(8);  // Attach the first motor to pin 9
    motor1.write(angle);
    delay(1000);  // Delay to allow the first motor to reach the position
    currentPosition = angle;
    motor1.detach();
  }
}

// Function to rotate the second motor 90 degrees and back to zero
void rotateSecondMotor() {
  motor2.attach(6);
  motor2.write(90);
  delay(2000);
  motor2.write(0);
  delay(2000);
  motor2.detach();
}


// // #include <Servo.h>

// // Servo motor1;  // First motor
// // Servo motor2;  // Second motor
// // bool flag=true;

// // void setup() {
// //   motor1.attach(8);  // Attach the first motor to pin 9
// //   motor2.attach(6);
// //   // motor2.attach(10); // Attach the second motor to pin 10
// //   motor1.write(120);   // Initialize the first motor to 0 degrees
// //   delay(490);
// //   // motor1.detach();
// //   // motor1.write(120);
// //   // delay(2000);
// //   // motor1.attach(8);
// //   motor1.write(0);   // Initialize the first motor to 0 degrees
// //   delay(490);
// //   // motor2.write(180);   // Initialize the second motor to 0 degrees
// //   // delay(260);
// //   // motor2.detach();
// //   // delay(1000);
// //   // motor2.attach(6);
// //   // motor2.write(-180);   // Initialize the second motor to 0 degrees
// //   // delay(260);
// //   // delay(1000);       // Delay to ensure the motors are initialized
// // }

// // void loop() {
// //   motor1.detach();
// //   motor2.detach();
// //   // Move the first motor to 120 degrees
// //   // motor1.write(120);
// //   // delay(500);
// //   // motor1.detach();
// //   // motor2.write(180);
// //   // delay(500);
// //   // motor2.detach();
// //     // Wait 1 second for the first motor to reach 120 degrees

// //   // Move the second motor to 90 degrees
// //   // motor2.write(90);
// //   // delay(1000);  // Wait 1 second for the second motor to reach 90 degrees

// //   // Stop the loop (remove this if you want the movements to repeat)
// // }

// void setup(){

// }

// void loop(){

// }