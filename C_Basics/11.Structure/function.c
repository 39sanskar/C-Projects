/*
1. Memory: Direct passing copies the whole structure; passing by
address is more efficient.
2. Modification: Changes in the function affect the original only
when passed by address.
3. Performance: Passing by address is faster, especially for large structures.
4. Simplicity: Direct passing is simpler but less flexible; passing by
address allows modifications.
*/

#include <stdio.h>
struct Student{
  int rollno;
  char name[10];
  float marks;
};

void printStudentPointer(struct Student *s);
void printStudent(struct Student s);
int main(){
  struct Student student = {1, "Sita", 88.5};
  struct Student *studentPtr = &student;
  printStudentPointer(studentPtr);
  printf("\n");
  printStudent(student);
  
  return 0;
}

void printStudentPointer(struct Student *s){
  printf("Student Details:\n");
  printf("Roll Number: %d\n", s->rollno);
  printf("Name: %s\n", s->name);
  printf("Marks: %.2f\n", s->marks);
}

void printStudent(struct Student s){
  printf("Student Details:\n");
  printf("Roll Number: %d\n", s.rollno);
  printf("Name: %s\n", s.name);
  printf("Marks: %.2f\n", s.marks);
}