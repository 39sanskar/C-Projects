/*
Copies the string pointed to by the source, including the
terminating null byte, to the destination

strcpy(destination, source(acctual string that wants to copy).)
*/

#include <stdio.h>
#include <string.h>
int main(){
  char str1[] = "Hello";
  char str2[20];
  // strcpy usage
  strcpy(str2, str1);
  printf("Copied string: %s\n", str2);
  return 0;
}