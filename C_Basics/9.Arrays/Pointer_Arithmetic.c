/*
1. Memory Increment/Decrement: ptr++ or ptr-- moves the pointer to the next
or previous memory location based on the type's size.
2. Addition/Subtraction: Adding or subtracting an integer n from a pointer
moves it n elements forward or backward.
3. Difference: Subtracting one pointer from another gives the number of
elements between them.

  *(arr + i) equals to arr[i]

Pointer arithmetic in C refers to performing arithmetic operations on pointers. Since a pointer holds the address of a variable, pointer arithmetic allows you to move the pointer forward or backward in memory, based on the size of the data type it points to.  
*/

#include <stdio.h>
int sumArray(int *arr, int size);
int main(){
  int myArray[] = {1, 2, 3, 4, 5};
  int size = sizeof(myArray)/ sizeof(myArray[0]);
  // Array decays into a pointer when passed
  int total = sumArray(myArray, size);

  printf("The sum of the array elements is: %d\n", total);
  return 0;
}
int sumArray(int *arr, int size){
  int sum = 0; 
  for(int i = 0; i < size; i++){
    // Access elements via pointer arithmetic
    sum +=  arr[i];
  }
  return sum; // Return the sum
}
