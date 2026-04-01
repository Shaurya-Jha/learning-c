#include <stdio.h>

int factorial(){
  int fact = 1;
  int numbers[10] = {1,2,3,4,5,6,7,8,9,10};

  for (int i=1; i<11; i++) {
    fact = fact * i;
  }

  return fact;
}

int sum_of_arrays(){

  int sum = 0;
  int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };

  for (int i=0; i < 10; i++) {
    sum = sum + i;
  }

  return sum;
}

int main(){

  for (int i=0; i < 5; i++) {
    printf("%d\t", i);
    printf("\n");
  }

  printf("sum of arrays is: %d\n", sum_of_arrays());

  printf("factorial of array is: %d\n", factorial());

  return 0;
}
