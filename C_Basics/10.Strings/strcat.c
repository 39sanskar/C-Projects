/*
Appends the source string to the destination string, overwriting the terminating null byte at the end of destination, and then adds a terminating null byte.
*/

#include <stdio.h>
#include <string.h>
int main (){
  char str1[20] = "Hello, ";
  char str2[] = "World";
  // strcat usage
  strcat(str1, str2);
  printf("Concatenated string: %s\n", str1);
  return 0; 
}
