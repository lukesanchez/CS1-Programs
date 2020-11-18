/*****************************************************
* This program prompts the user to enter the diameter 
* of a circle. Then calculates the circumference 
* and the area of the user-entered circle.
* Created by: Luke Sanchez
* Created on: Oct, 8 2019
******************************************************/

#include <stdio.h>
#include <math.h>
#include <assert.h>

#define PI 3.14159 // const of pi

double DiameterToCircumference(double);
double DiameterToArea(double);

// begin main
int main(void) {
  double userCircle;
  printf("Please enter the diameter of a circle: ");
  scanf("%lf", &userCircle);
  assert(userCircle != 0);

  double userRadius = userCircle / 2;
  printf("\nCircle Radius: %0.2lf", userRadius);
  
  DiameterToCircumference(userRadius);
  DiameterToArea(userRadius);
  return 0;
} // main end

//This function calculates the circle circumference. 
double DiameterToCircumference(double circleRadius){
  double circleCircumference = (2 * PI) * circleRadius;
  printf("\nCircle Circumfernece: %0.2lf", circleCircumference );
  return 0;
}

//This function calculates the circle area.
double DiameterToArea(double circleRadius){
  double circleArea = PI * pow(circleRadius, 2);
  printf("\nCircle Area: %0.2lf units squared\n", circleArea);
  return 0;
}