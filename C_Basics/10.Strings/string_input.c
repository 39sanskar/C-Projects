/*
1. Character Array: A string is a sequence of characters
terminated by a null character ('\0').
2. Null Termination: The null character ('\0') marks the end of
the string, not included in its length.
3. String Literals: Defined in double quotes, e.g., "Hello, World!".
4. Mutable: Strings can be modified when stored in a character array.


1. Memory Allocation: Fixed size at compile time, including the null terminator.
2. Contiguous Memory: Strings are stored contiguously like Arrays.
*/

#include <stdio.h>

int main() {
  char name[100];

  printf("Enter your name: ");
  scanf("%s", name);  // Only reads until the first space

  printf("Hello, %s\n", name);
  return 0;
}
