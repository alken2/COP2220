#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
int j = 0;
int k = 0;
int palinCheck (int n, char word[n + 1]);

int main(void) {
  int numchars = 0;
  int numchars2 = 0;
  printf("Enter the number of characters for your string (including spaces):\n");
  scanf("%d", &numchars);
  while (numchars < 1){
    printf("Please enter a number greater than 0:\n");
    scanf("%d", &numchars);
  }

  char strng1[numchars];
  char strng2[numchars];
  getchar();
  printf("Enter your word(s):\n");
  fgets(strng1, numchars + 1, stdin);

  if (numchars != strlen(strng1)){
    printf("\nError! The string does not correspond the number of characters.\n");
    exit(100);
  }

  while (strng1[i] != '\0'){
    if (strng1[i] != ' '){
      strng2[j++] = strng1[i];
    }
    else {
      k++;
    }
    i++;
  }
  strng2[j] = '\0';

  numchars2 = strlen(strng2);
  if (numchars2 != numchars){
    numchars2 = numchars - k;
  }

  printf("\nYour string is: %s\n", strng2);
  printf("\nYour number of non-space characters is: %d\n", numchars2);
  palinCheck(numchars2, strng2);
  return 0;
}

int palinCheck (int n, char word[n]){
  int temp;
  int x = 0;
  char revword[n];
  for (i = n - 1; i >= 0; i--) {
    revword[n - i - 1] = word[i];
  }
  for (i = 0; i < n; i++){
    if (word[i] == revword[i]){
      x++;
    }
  }
  if (x == n){
    printf("\nYour string, %s is a palindrome\n", revword);
  }
  else {
    printf("\nYour string is not a palindrome because it is not the same as %s", revword);
  }
  return 0;
}
