/*
1. Direct Initialization: Use curly braces {} directly after declaration, specifying
values in order.
2. Designated Initializers: C-99 allows initializing specific fields by name,
enhancing readability and flexibility.
3. Zero Initialization: Assigning {0} initializes all members to zero or null equivalents.
4. Copy Initialization: Initialize one structure with another of the same type.
*/


#include <stdio.h>
struct Student{
  int rollno;
  char name[10];
  float marks;
};
int main(){
  // Direct Initialization
  struct Student s1 = {1, "Aman", 99.89}; // Value Provide in the sequence
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s1.rollno, s1.name, s1.marks);

  // Designated Initializers
  struct Student s2 = {.name = "Shyam", .marks = 70.12, .rollno = 2};
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s2.rollno, s2.name, s2.marks);

  // Zero Initialization
  struct Student s3 = {0};
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s3.rollno, s3.name, s3.marks);

  // Copy Initialization
  struct Student s4 = s1; // Both side type must be same it will not work on different structure.
  s4.rollno = 4;
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s4.rollno, s4.name, s4.marks);

  return 0;
}
