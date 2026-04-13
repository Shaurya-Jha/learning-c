#include<stdio.h>
#include<stdlib.h>

typedef struct {
  char *name;
  int age;
} person;

typedef struct {
  int x;
  int y;
} point;

void exercise(){
  point *my_point = (point*) malloc(sizeof(point));

  // assign values to variable
  my_point->x = 3;
  my_point->y = 5;

  // show values assigned to them
  printf("x value is %d and y value is %d\n", my_point->x, my_point->y);

  free(my_point);

  // free the allocated memeory space using free()
  printf("after freeing the memory space the value of x and y is %d and %d\n", my_point->x, my_point->y);
}

int main(){
  person *my_person = (person*) malloc(sizeof(person));

  my_person->name = "John";
  my_person->age = 26;

  printf("%s\n", my_person->name);
  printf("%d\n", my_person->age);

  exercise();

  return 0;
}
