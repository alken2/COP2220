#include <stdio.h>

int main(void) {
  //Local Declarations
  char input1;
  int input2;
  double input3;
  //Statements
  printf("Enter a character (between A-Z), an integer (between 1-120), and any number:\n");
  scanf("%c %d %lf", &input1,&input2, &input3);
  printf("\nCharacter (Character, Integer):\t%c\t%d", input1, input1);
  printf("\nInteger (Character, Float):\t%c\t%.3f", input2, (float)input2);
  printf("\nNumber (Integer, Float):\t%d\t%f", (int)input3, input3);
  return 0;
}
