#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Function Declarations
float getNumA(void);
float getNumBC(void);
long double getNumD(void);
int getNumE(void);
int getNumFG(void);
float getNumHI(void);

int main(void) {
  //Local Declarations (none)
  //Statements
  srand(time(NULL));
  printf("Absolute value:\t%f\n", getNumA());
  printf("Exponential value:\t%f\n", getNumBC());
  printf("Rounded number:\t%Lf\n", getNumD());
  printf("Random number:\t%d\n", getNumE());
  printf("Random number\t%d\n", getNumFG());
  printf("Random number\t%f\n", getNumHI());
  return 0;
}//main

float getNumA(void) {
  //Local Declarations
  float num1;
  float num2;
  //Statements
  printf("\nEnter a number to receive its absolute value:\t");
  scanf("%f", &num1);
  num2 = fabsf(num1);
  return num2;
}//getNumA

float getNumBC(void) {
  //Local Declarations
  float num1;
  float num2;
  float num3;
  //Statements
  printf("\nEnter two numbers for exponentiation (X^Y)");
  printf("\nX:\t");
  scanf("%f", &num1);
  printf("Y:\t");
  scanf("%f", &num2);
  num3 = powf(num1,num2);
  return num3;
}//getNumBC

long double getNumD(void) {
  //Local Declarations
  long double num1;
  long double num2;
  int num3;
  //Statements
  printf("\nEnter a number to round:\t");
  scanf("%Lf", &num1);
  num2 = num1 + 0.5;
  num3 = (int)num2;
  num2 = (long double)num3;
  return num2;
}//getNumD

int getNumE(void) {
  //Local Declarations
  int num1;
  int num2;
  //Statements
  printf("\nEnter a maximum integer to generate a random number:\t");
  scanf("%d", &num1);
  num2 = rand() % num1;
  return num2;
}//getNumE

int getNumFG(void) {
  //Local Declarations
  int num1;
  int num2;
  int num3;
  //Statements
  printf("\nEnter a minimum and a maximum integer respectively to generate a random number:\n");
  scanf("%d %d", &num1, &num2);
  num3 = rand() % (num2 - num1 + 1) + num1;
  return num3;
}//getNumFG

float getNumHI(void) {
  //Local Declarations
  float num1;
  float num2;
  float num3;
  //Statements
  printf("\nEnter a minimum and a maximum number respectively to generate a random number:\n");
  scanf("%f %f", &num1, &num2);
  num3 = ((float)rand() / (float)RAND_MAX) * (num2 - num1) + num1;
  return num3;
}//getNumHI
