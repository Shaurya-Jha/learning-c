#include<stdio.h>

struct point {
  int x;
  int y;
};

int exercise(){
  typedef struct {
    char *name;
    int age;
  } person;

  person p1;

  p1.name = "John Doe";
  p1.age = 32;

  printf("name: %s - age: %d\n", p1.name, p1.age);

  return 0;
}

int main(){
  struct point p;

  p.x = 10;
  p.y = 15;

  // draw(p);
  
  exercise();
  return 0;
}
