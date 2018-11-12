/*
 * Author: Charles Hussey and Susan Zhao
 * Description: Code for running fall-semester prototype of Flipside display
 */
#include <Stepper.h>
 
int in1Pin = 12;
int in2Pin = 11;
int in3Pin = 10;
int in4Pin = 9;
 
Stepper motor(200, in1Pin, in2Pin, in3Pin, in4Pin);  
void setup() {
  int num_rows = 5;
  int num_cols = 20;
  
  int pixelMatrix[num_rows][num_cols];
  for (int i = 0; i < num_rows; i++){
    for (int j = 0; j < num_cols; j++){
      pixelMatrix[i][j] = 0;
    }
  }
  // Stepper Motor set-up
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);
 
  // this line is for Leonardo's, it delays the serial interface
  // until the terminal window is opened
  while (!Serial);
  
  Serial.begin(9600);
  motor.setSpeed(60);
}
void loop() {
  // put your main code here, to run repeatedly:
  
}
