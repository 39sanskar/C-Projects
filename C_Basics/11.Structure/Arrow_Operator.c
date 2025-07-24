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
#include <string.h>
struct Student{
  int rollno;
  char name[10];
  float marks;
};
int main(){
  // Declare a Student structure variable
  struct Student student;
  struct Student *studentPtr = &student; // Pointer to the structure

  // Assign values to the structure using the pointer
  studentPtr -> rollno = 1;
  // Use strcpy to copy string
  strcpy(studentPtr->name, "Sita");
  studentPtr->marks = 88.5;

  // Access and print structure members using the pointer
  printf("Student details:\n");
  printf("Roll Number: %d\n", studentPtr->rollno);
  printf("Name: %s\n", studentPtr->name);
  printf("Marks: %.2f\n", studentPtr->marks);
  return 0;
}
