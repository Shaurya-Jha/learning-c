#include <stdio.h>

// see what happens if we dont use static keyword
int runner(){
  int count = 0;
  count++;
  return count;
}

// now lets use the static keyword and see what happens
int static_runner(){
  static int count = 0;
  count++;
  return count;
}

// exercise
int sum(int num) {
  static int sum = 0;   // static variable
  sum += num;           // add num passed to the sum
  return sum;         
}

int main(){
  printf("below is the output using the runner function without static keyword: \n");
  printf("runner count is: %d\n", runner());
  printf("runner count is: %d\n", runner());

  printf("----------------------------------------------------------------------\n");

  printf("below is the output using the static runner function which uses static keyword for its variables: \n");
  printf("runner count is: %d\n", static_runner());
  printf("runner count is: %d\n", static_runner());
  printf("runner count is: %d\n", static_runner());

  printf("----------------------------------------------------------------------\n");
  
  printf("exercise output ------------------------------------------------------\n");
  printf("sum of numbers is: %d\n", sum(5));
  printf("sum of numbers is: %d\n", sum(10));
  printf("sum of numbers is: %d\n", sum(15));
  printf("sum of numbers is: %d\n", sum(20));

  return 0;
}
