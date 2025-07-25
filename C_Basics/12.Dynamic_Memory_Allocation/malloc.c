/*
1. Include Header: Use #include <stdlib.h> to access malloc.
2. Size Argument: Pass the size in bytes of the memory you need to allocate.
3. Pointer Typecasting: Cast the returned void* pointer to the appropriate type.
4. Check for NULL: Always check if malloc returns NULL, indicating allocation
failure.
5. Memory Initialization: malloc does not initialize memory; it's raw and may
contain garbage values.
*/

#include <stdlib.h>
#include <stdio.h>
int main(){
  int *arr;
  int n;
  
  printf("Enter the number of elements: ");
  scanf(" %d", &n);

  // Dynamically allocate memory using malloc
  arr = (int*)malloc(n * sizeof(int)); // Pass the size in bytes of the memory you need to allocate.

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