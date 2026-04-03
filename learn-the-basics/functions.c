#include<stdio.h>

// declare functions name and their params
int foo(int bar);
void print_big(int x);

int main(){
  // calling from from the main
  printf("the bar value is: %d\n", foo(1));

  print_big(20);
}

// initiaze or add logic later after main declaration
int foo(int bar) {
  return bar + 1;
}

void print_big(int x) {
  if (x > 10) {
    printf("%d is bigger than 10\n", x);
  }
}
