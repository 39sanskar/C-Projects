/*
1. Immutable String Literals: String literals assigned to character pointers are stored in read-only memory, making them 
immutable. Attempting to modify them, e.g., str[0] = 'M';, leads to undefined behavior.

2. Array vs. Pointer: While an array name is a constant pointer to its first element, 
a character array allows modification of its elements.
*/

#include <stdio.h>
int main(){
  // Character array -modifiable
  char arrStr[] = "Hello";
  arrStr[0] = 'j'; 
  printf("Modified array string: %s\n", arrStr);

  // Character pointer to string literal - not modifiable
  char *ptrStr = "Hello";
  // Attempting to modify the first character
  ptrStr[0] = 'j'; // This will lead to undefined behaviour

  printf("Pointer string (attempted modification): %s\n", ptrStr);
  return 0;
}

/*
output:

Modified array string: jello
[1]    9469 bus error  ./pointer
*/