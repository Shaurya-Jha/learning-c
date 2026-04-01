#include <stdio.h>

int exercise(){
  int a, b, c;
  a = 2; b = 3; c = 7;

  int sum = a + b + c;
  printf("sum of three numbers %d, %d and %d is: %d", a, b, c, sum);

  return 0;
}

int main(){
  int foo;
  int bar = 1;

  printf("value of foo is: %d\n", foo);
  printf("value of bar is: %d\n", bar);

  // call the exercise method
  exercise();

  return 0;
}

