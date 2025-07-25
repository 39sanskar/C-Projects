/*
1. Initialization: calloc initializes all allocated memory to zero.
2. Syntax: Takes two arguments, the number of elements and the size of each
element.
3. Usage: Preferred for array allocation when zero-initialization is needed.
4. Memory Overhead: May have slightly more overhead than malloc due to
initialization.
5. Return Type: Like malloc, returns a void* pointer that should be cast to the
appropriate type.
*/

#include <stdlib.h>
#include <stdio.h>
int main(){
  int *arr;
  int n;
  
  printf("Enter the number of elements: ");
  scanf(" %d", &n);

  // Dynamically allocate memory using calloc 
  arr = (int*)calloc(n ,sizeof(int)); // Pass the size in bytes of the memory you need to allocate.

  // Check if the memory has been successfully allocated
  if (arr == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }

  // Input elements into the array and sum them up
  printf("Enter %d elements:\n", n);
  for(int i = 0; i < n; i++){
    printf("Enter elements %d: ", i);
    scanf("%d", &arr[i]);
    
  }

  long sum = 0;
  for (int i = 0; i < n; i++){
    sum += arr[i]; // Add element to sum
  }
  
  // Print the sum of the elements
  printf("The sum of the array elements is: %ld\n", sum);
  return 0;
}

/*
Concept:

calloc, which does zero-initialize the allocated memory. That means all elements of arr 
should be initialized to 0 before you input any values into them.
 
However, you are immediately taking user input and overwriting those values, 
which is why you don’t see the zero initialization.

*/