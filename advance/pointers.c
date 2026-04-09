#include <stdio.h>

int exercise(){
  int n = 20;
  int *pointer_to_n = &n;

  // increment the value n using the pointer
  *pointer_to_n += 1;

  printf("the updated value of n from 20 is: %d\n", n);

  return 0;
}

int main(){
  char *name = "John";

  // get the memory address of the name variable in the memory
  printf("%p\n ", &name);

  // dereferencing
  int num = 10;
  int *pointer_to_num = &num;

  printf("%d is the number\n", num);
  printf("the value of num is also %d\n", *pointer_to_num);

  exercise();

  return 0;
}
