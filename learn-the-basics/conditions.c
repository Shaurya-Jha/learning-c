#include<stdio.h>

int guessNumber(){
  int input;

  printf("Guess and enter any positive greater than zero: ");

  scanf("%d", &input);

  if (input > 555) {
    printf("\nYour guess is too high!\n");
  }

  if (input < 555) {
    printf("\nYour guess is too low!\n");
  }

  if (input == 555) {
    printf("Correct. You guessed it right!\n");
  }

  return 0;
}

int main(){
  guessNumber();

  return 0;
}
