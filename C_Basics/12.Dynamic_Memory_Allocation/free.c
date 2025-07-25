/*
1. Memory Release: free deallocates previously allocated memory, making it available 
for future allocations.
2. Prevent Leaks: Essential for preventing memory leaks in programs that allocate dynamic memory.
3. Pointer Argument: Takes a pointer to the allocated memory block as its argument.
4. Null Safe: Calling free with a NULL pointer is safe and results in no operation.
5. Use Once: After calling free, the pointer should not be used until it points to 
another allocated memory block or is set to NULL.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
  // Allocate memory for an integer
  int *p = (int*)malloc(sizeof(int));
  if (p == NULL){
    printf("Memory allocation failed.\n");
    return 1;
  }

  *p = 10; // Assign a value
  printf(" %d\n", *p);

  free(p); // Free the allocated memory
  p = NULL; //Avoid dangling pointer

  return 0;
}