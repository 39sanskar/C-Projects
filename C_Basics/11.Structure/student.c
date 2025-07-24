#include <stdio.h>

struct Student {
  int rollno;
  char name[10];
  float marks;
};

int main(){
  struct Student Aman;
  // Input for Aman
  printf("Enter details for Aman\n");
  printf("Roll No: ");
  scanf("%d", &Aman.rollno);
  printf("Marks: ");
  scanf("%f", &Aman.marks);
  // Output
  printf("\nStudent Details:\n");
  printf("Aman- Roll No: %d, Marks: %.2f\n", Aman.rollno, Aman.marks);
  return 0;
}

/*
1. Memory Dot Operator: student.rollno for direct access.
2. Nested Access: school.class.student.rollno for nested structures.
*/

/*
1. Keyword: Use the struct keyword to define a structure.
2. Name: Optionally give a name to the structure type.
3. Members: Enclose member declarations in braces {}.
4. Semicolon: End the structure definition with a semicolon.
*/