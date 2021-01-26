#include <stdio.h>
#include <stdlib.h>

int GetDate(void);
int ValiDate(int a, int b, int c);
int checkLeapYear(int z);
int CrunchDate(int m, int d, int y);

int main(void) {
  GetDate();
  return 0;
}

int GetDate(void){
  int num1;
  int num2;
  int num3;
  FILE *data;
  data = fopen("date.txt","r");
  if (data == NULL){
    printf("Error! File unavailable.\n");
    exit(100);
  }
  fscanf(data,"%d %d %d", &num1, &num2, &num3);
  printf("The input date (m/d/y) is: %d %d %d\n", num1, num2, num3);
  fclose(data); 
  ValiDate(num1, num2, num3);
  return 0;
}

int ValiDate(int a, int b, int c){
  if (a > 12 || a < 1){
    printf("Error! Invalid month: %d\n", a);
    exit(101);
  }
  if (b > 31 || b < 1){
    printf("Error! Invalid day: %d\n", b);
    exit(102);
  }
  if (c > 2019 || c < 1500){
    printf("Error! Invalid year: %d\n", c);
    exit(103);
  }
  if (a == 2){
    if (b > 29 || b < 1){
      printf("Error! Invalid day: %d\n", b);
      exit(104);
    }
    if (b == 29){
      checkLeapYear(c);
    }
  }
  if (a == 4 || a == 6 || a == 9 || a == 11){
    if (b > 30 || b < 1){
      printf("Error! Invalid day: %d\n", b);
      exit(105);
    }
  }
  CrunchDate(a, b, c);
  return 0;
}

int checkLeapYear(int z) {
  if (z % 100 == 0) {
    if (z % 400 != 0){
      printf("Error! Invalid leap year: %d\n", z);
      exit(106);
    }
  }
  if (z % 4 != 0) {
    printf("Error! Invalid leap year: %d\n", z);
    exit(107);
  }
  return 0;
}

int CrunchDate(int m, int d, int y){
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  int num5 = 0;
  int num6 = 0;
  int num7 = 0;
  int num8 = 0;
  int sum1 = 0;
  int ctrl1 = 0;
  int ctrl2 = 0;
  num1 = m % 10;
  if (m > 9){
    num2 = (m / 10) % 10;
  }
  num3 = d % 10;
  if (d> 9){
    num4 = (d / 10) % 10;
  }
  num5 = y % 10;
  num6 = (y / 10) % 10;
  num7 = (y / 100) % 10;
  num8 = (y / 1000) % 10;
  sum1 = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
  while (sum1 > 9){
    ctrl1 = sum1 % 10;
    ctrl2 = (sum1 / 10) % 10;
    sum1 = ctrl1 + ctrl2;
  }
  switch (sum1){
    case 1: printf("=1= Saying 'you are right' instead of saying 'I know' is a good social habit.\n");
    break;
    case 2: printf("=2= Generally, people judge others by their actions and themselves by their intentions, so make an effort to understand why people do the things they do.\n");
    break;
    case 3: printf("=3= It is important that you avoid advising people to do things that you would not do yourself.\n");
    break;
    case 4: printf("=4= Of all the world's resources, time is the most limited, so use it wisely.\n");
    break;
    case 5: printf("=5= There's something strange about knowledge: the more you know, the more you don't.\n");
    break;
    case 6: printf("=6= There's nothing wrong with being a little paranoid, especially if you have a reason to be.\n");
    break;
    case 7: printf("=7= Every mistake you make is a chance to learn something new, except if you make the same mistake.\n");
    break;
    case 8: printf("=8= There is a difference between quitting and giving up: quitting leaves you with a sense of control over your situation, but giving up does not.\n");
    break;
    case 9: printf("=9= It is almost impossible to change someone, and that is because change has to start from oneself.\n");
    break;
    default: printf("=0= The only way you are seeing this statement is if you are seeing all the other statements at the same time.\n");
    break;
  }
  return 0;
}
