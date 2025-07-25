/*
1. Resize Memory: realloc is used to resize previously allocated memory without losing the data.

2. New Allocation: If passed a NULL pointer, it behaves like malloc.

3. Freeing: If the new size is 0, it behaves like free, deallocating the memory.

4. Data Preservation: Attempts to preserve the original data, even when moving to a new location.

5. Return Value: Returns a pointer to the newly allocated memory, which may differ from the original pointer.

6. Error Handling: Returns NULL on failure without freeing the original block, so always 
check the return value before using it.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
  // Allocate memory for 2 integers
  int* arr = malloc(2 * sizeof(int));
  arr[0] = 1;
  arr[1] = 2;

  // Resize array to hold 3 integers
  arr = realloc(arr, 3 * sizeof(int));
  arr[2] = 3; // Initialize new element

  // Print new array size elements
  for (int i = 0; i < 3; ++i){
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  free(arr);  // Free the allocated memory
  return 0;
}