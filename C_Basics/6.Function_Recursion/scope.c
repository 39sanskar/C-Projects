/*
1. Local Scope: Variables inside functions are local, not accessible outside.
2. Global Scope: Variables outside functions are global, accessible anywhere
in the file.
3. Block Scope: Variables in blocks (like if or loops) are accessible only within
those blocks.
4. Function Parameters: Act as local variables within the function.
5. Lifetime: Local variables exist during function execution only.
*/

#include <stdio.h>

int main(void) {
  int y = 5;
  for (int i = 0; i < 10; i++) {
    int z = 3;
    y = z + 3;  // y becomes 6 in every iteration
  }
  printf("Final value of y: %d\n", y);  // Output
  return 0;
}
