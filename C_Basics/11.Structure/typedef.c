/*
1. Alias Creation: typedef creates aliases(nickname) for existing types, making them easier to work with.
2. Structure Simplification: Often used to simplify the syntax for structures.
3. Readability: Enhances code readability and maintainability by using more meaningful names.
4. Portability: Facilitates portability across different systems by abstracting type specifics.
*/

#include<stdio.h>

// struct Student {
//   int rollno;
//   char name[10];
//   float marks;
// };

typedef struct {
  int rollno;
  char name[10];
  float marks;
} Student;

int main() {
  typedef int Aman;

  Aman i = 5;
  
  Student student = {1, "Ram", 45.5};
  //Stu shaym = {2, "Shyam", 70};

  // for (int i = 0; i < 5; i++) {
  //   printf("\nStudent Name: %s, RollNo: %d, Marks: %.2f",
  //   students[i].name, students[i].rollno, students[i].marks);
  // }
}

