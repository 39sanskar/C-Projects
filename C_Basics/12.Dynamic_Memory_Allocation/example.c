#include <stdio.h>
#include <stdlib.h>
int main(){

  int *arr = (int*) calloc(2, sizeof(int));
  /*
  Allocates memory for 2 integers, zero-initialized.
  Initially, both arr[0] and arr[1] are 0.
  */
  if (arr == NULL) {
    printf("Not enough memory:");
    return 1;
  }
  printf ("Address of arr: %p\n", arr);
  // You assign values to the first two elements.
  arr[0] = 45;
  arr[1] = 74;

  arr = (int*) realloc(arr, 3 * sizeof(int));
  /*
  Resizes the memory to hold 3 integers.
  If the new size is larger than the original, the new memory (e.g., arr[2]) is not initialized. So arr[2] can contain garbage unless you explicitly assign a value.
  */
  if (arr == NULL) {
    printf("Not enough memory:");
    return 1;
  }
  printf("New Address of arr: %p\n", arr);
  printf("Original elements are: %d %d\n", arr[0], arr[1]);
  arr[2] = 98; // You assign a proper value to the new element, which is good.
  return 0;
}

/*
Summary:

|   return value | Meaning                      |
| -------------- | ---------------------------- |
|  return 0;     | Success (OK)                 |
|  return 1;     | Error (something went wrong) |

*/

/*
Notes to Remember:

1. Reallocation might move the memory block:
   That’s why it’s smart that you printed both the original and new addresses.
   realloc may move the block to a new location if the old one can't be extended.
2. Never use the old pointer after realloc:
  Always assign the result of realloc back to the original pointer, as you've done:
  arr = realloc(arr, new_size);

3. Memory leak safety (advanced):
   Ideally, use a temporary pointer to avoid memory leaks on failure:

   int* temp = realloc(arr, new_size);
   if (temp == NULL) {
    // arr is still valid here
    free(arr);
    return 1;
   }
   arr = temp;

4. Free memory (optional here but good practice):  
  free(arr);

*/