#include <stdio.h>
#include <string.h>
int main(){
  char str1[] = "Hello";
  // strlen usage
  int len = strlen(str1);
  printf("Length of '%s' is %d\n", str1, len);
  return 0;
}

/*
Returns the length of a string, not including the terminating null byte ('\0').
*/
