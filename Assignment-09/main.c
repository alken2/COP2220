#include <stdio.h>

int fib(long long int* arr, int n);

int main(void) {
  int num1 = -1;
  printf("Enter an integer between 0 and 70:\n");
  scanf("%d", &num1);
  while (num1 > 70 || num1 < 0){
    printf("\nInvalid input! Please enter an integer between 0 and 70:\n");
    scanf("%d", &num1);
  }
  long long int arr[num1];
  arr[0] = 0;
  arr[1] = 1;
  fib(arr, num1);
  return 0;
}

int fib(long long int* arr, int n){
  if (n == 0){
    printf("The first number of the Fibonacci Sequence is:\n%lld\n", arr[n]);
    return 0;
  }
  else if (n == 1){
    printf("The first two numbers of the Fibonacci Sequence are:\n%lld\n%lld\n", arr[n - 1], arr[n]);
    return 0;
  }
  for (int i = 2; i < n; i++){
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  printf("The first %d numbers of the Fibonacci Sequence are:\n", n);
  for (int i = 0; i < n; i++){
    printf("%lld\n", arr[i]);
  }
  return 0;
}
