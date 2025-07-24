/*
// Declare a Student structure variable
struct Student student = {1, "Student", 90.5}
// Pointer to the structure
struct Student *studentPtr = &student;

1. Definition: Structure pointers are pointers that point to structure variables.
2. Pointer Arithmetic: For structure arrays same pointer arithmetic applies.
*/

/*
1. Purpose: Used to access members of a structure or union through a pointer.
2. Syntax: pointer->member accesses the member of the structure that pointer points to.
3. Alternative: Equivalent to (*pointer).member, but more concise.
4. Use Case: Simplifies accessing structure members without dereferencing the pointer
explicitly.
5. Common in Linked Lists: Frequently used in data structures like linked lists for navigating
through nodes.
*/

#include <stdio.h>

struct Student{
  int rollno;
  char name[10];
  float marks;
};
int main(){
  int a = 5;
  int *ptr = &a;
  
  struct Student student = {1, "Ram", 45.5};
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", student.rollno, student.name, student.marks);

  // using pointer 
  struct Student *str_ptr = &student;
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", (*str_ptr).rollno, (*str_ptr).name, (*str_ptr).marks);
  printf("\n");

}