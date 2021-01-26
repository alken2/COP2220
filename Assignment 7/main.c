#include <stdio.h>
#include <stdlib.h>

int DToO(int num1);

int main(void) {
  int input1;
  printf("Enter an integer between 0 and 2097151:\t");
  scanf("%d", &input1);
  DToO(input1);
  return 0;
}

int DToO(int num1){
  int x = 1;
  int dec = num1;
  int oct = 0;
  if (dec > 2097151 || dec < 0) {
    printf("\nUNABLE TO CONVERT\n");
    exit (100);
  }
  while (dec > 0) {
    oct += x * (dec % 8);
    dec /= 8;
    x *= 10;
  }
  printf("\nDecimal: %7d\tOctal: %07d", num1, oct);
  return 0;
}
