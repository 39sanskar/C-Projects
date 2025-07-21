/*
1. Syntax: Declared by specifying the type, name, and size in brackets,
e.g., int arr[10];.
2. Fixed Size: Size must be known at compile time or be a constant expression.
3. Zero-Based Indexing: Arrays are indexed starting from 0.
4. Storage: Contiguous block of memory.
5. Type Uniformity: All elements must be of the same type.
*/

/*
Index is always start from zero.
(Array length = Arrays Last Index + 1);

1.Use Indexes: Access with arr[index].
2.Starts at 0: First element is arr[0].
3.For Loops: Iterate with loops.
4.No Bounds Check: Accessing outside the array size is unsafe.
*/
#include <stdio.h>
int main(){
  int marks[5];
  printf("Please enter marks for Student 1: ");
  scanf(" %d", &marks[0]);
  printf("Please enter marks for Student 2: ");
  scanf(" %d", &marks[1]);
  printf("Please enter marks for Student 3: ");
  scanf(" %d", &marks[2]);
  printf("Please enter marks for Student 4: ");
  scanf(" %d", &marks[3]);
  printf("Please enter marks for Student 5: ");
  scanf(" %d", &marks[4]);

  printf("Marks of student 1 are: %d\n", marks[0]);
  printf("Marks of student 2 are: %d\n", marks[1]);
  printf("Marks of student 3 are: %d\n", marks[2]);
  printf("Marks of student 4 are: %d\n", marks[3]);
  printf("Marks of student 5 are: %d\n", marks[4]);
  return 0;
} 