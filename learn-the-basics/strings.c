#include <stdio.h>
#include <strings.h>

void exercise(){
  const char *first_name = "John";
  const char last_name[] = "Doe";
}

int main(){

  // define an only readable string
  const char * favouriteStar = "Eva Lovia";
  printf("%s\n", favouriteStar);

  // create and use a reusable string
  char name[] = "Anya Ivy";
  printf("%s\n", name);

  // string operations

  // find length of the string
  int lengthOfName = strlen(name);
  printf("the length of the string is: %d\n", lengthOfName);

  // compare two strings
  // safe method - strncmp
  if (strncmp(name, "Anya Ivy", 8)) {
    printf("Both strings are equal\n");
  }

  // unsafe method - strcmp (docs say avoid to use this)

  // concatenate strings
  char dest[20] = "hello";
  char src[10] = "world";

  strncat(dest, src, 4);
  printf("%s\n", dest);   // return helloworl -> adds 4 chars from the src string to the dest string

  strncat(dest, src, 20);
  printf("%s\n", dest);   // return helloworld -> adds 10 chars from the src string to the dest string

  exercise();

  return 0;   // fail safe
}
