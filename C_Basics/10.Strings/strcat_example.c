#include <stdio.h>
#include <string.h>
int main(){
  char first_name[50];
  char last_name[50];
  printf("Please enter your first name: ");
  fgets(first_name, 50, stdin);
  printf("Please enter your last name: ");
  fgets(last_name, 50, stdin);

  strcat(first_name, last_name); // It appends the last_name string to the end of the first_name string.
  printf("Your final name is: %s", first_name);
  return 0;
}

/*
Syntax:

char *strcat(char *dest, const char *src);

1. dest → the destination string where the result will be stored (must be large enough to hold the combined result).
2. src → the source string to append.
*/