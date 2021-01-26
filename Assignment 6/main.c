#include <stdio.h>

//Function Declarations
int checkLeapYear(int a);

int main(void) {
  //Local Declarations
  int year;
  //Statements
  printf("Enter a year between 1500 and 2017 to check for a leap year:\t");
  scanf("%d", &year);
  checkLeapYear(year);
  return 0;
}

int checkLeapYear(int a) {
  //Local Declarations
  int b = a % 4;
  //Statements
  if (a < 1500 || a > 2017) {
    printf("\nThe input received is not a valid year!");
  }
  else if (a % 100 == 0) {
    if (a % 400 == 0){
      printf("\n%d is a leap year.", a);
      return 0;
    }
    else {
      printf("\n%d is not a leap year.", a);
      return 0;
    }
  }
  if (b == 0) {
    printf("\n%d is a leap year.", a);
  }
  else {
    printf("\n%d is not a leap year.", a);
  }
  return 0;
}
