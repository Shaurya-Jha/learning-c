#include <stdio.h>

typedef struct {
  int x; int y;
} point;

struct person {
  char *name;
  int age;
};

void addone(int *n) {
  (*n)++;
}

void move(point *p){
  p->x++;
  p->y++;
}

int birthday(struct person *p) {
  return p->age += 1;
}

int main(){
  int n = 1;

  printf("the value of n before calling addone function is: %d\n", n);

  // after calling the addone function
  addone(&n);
  printf("value after calling addone function once: %d\n", n);

  addone(&n);
  printf("value after calling addone function twice: %d\n", n);

  point p1;
  p1.x = 10;
  p1.y= 11;

  printf("x and y for p1 initial is: %d - %d\n", p1.x, p1.y);

  // after calling the move function
  move(&p1);

  printf("x and y after calling move: %d - %d\n", p1.x, p1.y);

  struct person p2;
  p2.name = "John Doe";
  p2.age = 25;

  birthday(&p2);

  printf("after birthday your new age is: %d\n", p2.age);
  
  return 0;
}
