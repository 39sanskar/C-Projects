/*
1. Direct Assignment: Initialize with values, e.g., int nums[] = {1, 2, 3}; 
2. Auto Zero-fill: Unspecified elements default to zero, e.g., 
int arr[5] = {1}; here first value is 1 and other remaining 4-values are 0.

3. Zero Array: Initialize all to zero with int arr[5] = {0}; or empty braces.

4. Designated: Set specific elements, e.g., int arr[5] = {[2] = 5}; (important)
here at the index[2] the value is 5 and remaining other places value is 0;
*/

#include <stdio.h>
int main(){
  int marks[5] = {90, 94, 91, 96, 100}; // this is the array initialization.

  printf("Marks of student 1 are: %d\n", marks[0]);
  printf("Marks of student 2 are: %d\n", marks[1]);
  printf("Marks of student 3 are: %d\n", marks[2]);
  printf("Marks of student 4 are: %d\n", marks[3]);
  printf("Marks of student 5 are: %d\n", marks[4]);
  return 0;
}