#include <stdio.h>

int exercise(){
  // declare variables
  int average, grades[3];

  // populate the grades
  grades[0] = 90;
  grades[1] = 80;
  grades[2] = 85;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  
  printf("the average of the 3 grades is: %d\n", average);

  return 0;
}

int main(){

  int numbers[10];
  // will cause error because array is not populated
  // printf("%d\n", numbers);    

  // populate the array
  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;
  numbers[5] = 60;
  numbers[6] = 70;

  for (int num = 0; num < 10; num++) {
    printf("%d\n", numbers[num]);
  }

  exercise();

  return 0;
}
