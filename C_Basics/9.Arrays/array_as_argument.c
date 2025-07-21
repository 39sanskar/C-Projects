/*
Array as Function Arguments.
when array is pass it is by default call by reference.

1. Arrays to Pointers: Arrays become pointers when passed to functions.
2. Call By Reference: Changes in functions affect the original array.
3. Include Size: Pass array size as an extra argument.
4. Specify Type: Declare element type in the function parameters.
5. Efficient: No full array copy, just the pointer is passed.

*/

#include <stdio.h>
void print_marks(int marks[], int no_of_students);
int main(){
  int marks[10];
  int no_of_students = 5;

  for (int i = 0; i < no_of_students; i++){
    printf("Please enter marks of Students %d: ", i + 1);
    scanf(" %d", &marks[i]);
  }
  print_marks(marks, no_of_students);
  return 0;
}

void print_marks(int student_marks[], int student_count){
  for(int i = 0; i < student_count; i++){
    printf("Marks of Students %d are: %d\n", (i + 1),
     student_marks[i]);
  }
}