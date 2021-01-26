/*
Written by: Kenneth Alcineus
Date: 7/5/2019
Update: 7/9/2019
*/
#include <stdio.h>

//Function Declarations
int celsius(void);
int fahrenheit(void);
float getC(void);
float CtoF(float Cinput);
float giveF(float Foutput);
float getF(void);
float FtoC(float Finput);
float giveC(float Coutput);

int main(void) {
  celsius();
  fahrenheit();
  return 0;
}//main

int celsius(void) {
  //Local Declarations (none)
  //Statements
  giveF(getC());
  return 0;
}//celsius

float getC(void) {
  //Local Declarations
  float num1;
  //Statements
  printf("Enter a temperature in Celsius:\n");
  scanf("%f",&num1);
  return num1;
}//getC

float CtoF(float Cinput) {
  //Local Declarations
  float num1;
  //Statements
  num1 = (Cinput * 1.8) + 32;
  return num1;
}//CtoF

float giveF(float Foutput) {
  //Local Declarations (none)
  //Statements
  printf("The temperature in Fahrenheit is:%f\n\n",CtoF(Foutput));
  return 0;
}//giveF

int fahrenheit(void) {
  //Local Declarations (none)
  //Statements
  giveC(getF());
  return 0;
}//fahrenheit

float getF(void){
  //Local Declarations
  float num1;
  //Statements
  printf("Enter a temperature in Fahrenheit:\n");
  scanf("%f",&num1);
  return num1;
}//getF

float FtoC(float Finput){
  //Local Declarations
  float num1;
  //Statements
  num1 = (Finput - 32) / 1.8;
  return num1;
}//FtoC

float giveC(float Coutput){
  //Local Declarations (none)
  //Statements
  printf("The temperature in Celsius is:%f\n\n",FtoC(Coutput));
  return 0;
}//giveC
