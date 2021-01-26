/*
Written by: Kenneth Alcineus
Date: 6/26/2019
*/
#include <stdio.h>
int main(void) {
  //Local Declarations
  int num1;
  int num2;
  int num3;
  int num4;
  int num5;
  int num6;
  int num7;
  int num8;
  int num9;
  int num10;
  //Statements
  printf("\nPlease enter ten integers:\n");
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  scanf("%d",&num4);
  scanf("%d",&num5);
  scanf("%d",&num6);
  scanf("%d",&num7);
  scanf("%d",&num8);
  scanf("%d",&num9);
  scanf("%d",&num10);
  printf("\nYour numbers are the following:\n");
  printf("%d\t%d\n",num1,num10);
  printf("%d\t%d\n",num2,num9);
  printf("%d\t%d\n",num3,num8);
  printf("%d\t%d\n",num4,num7);
  printf("%d\t%d\n",num5,num6);
  return 0;
}
