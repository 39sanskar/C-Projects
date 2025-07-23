#include <stdio.h>
int main(){
  char name[] = "Sanskar Mishra";
  printf("Array: Before modifying: %s\n", name);
  name[9] = 's';
  printf("Array: After modifying: %s\n", name);

  char *nick_name = "Sanskar Mishra";
  printf("Pointer: Before modifying: %s\n", nick_name);
  nick_name[9] = 's';
  printf("Pointer: After modifying: %s\n", nick_name);

  return 0;
}

/*
Output:

Array: Before modifying: Sanskar Mishra
Array: After modifying: Sanskar Msshra
Pointer: Before modifying: Sanskar Mishra
[1]    10157 bus error  ./example
*/