#include <stdio.h>

struct Student{
  int rollno;
  char name[10];
  float marks;
};

int main(){
  // Initialization an array of student structures
  struct Student students[5] = {
    {1, "Student1", 90.5},
    {2, "Student2", 85.0},
    {3, "Student3", 92.0},
    {4, "Student4", 88.0},
    {5, "Student5", 95.0}
  };

  // Loop to print each student's data
  for (int i = 0; i < 5; i++){
    printf("Roll Number: %d\n", students[i].rollno);
    printf("Name: %s\n", students[i].name);
    printf("Marks: %.2f\n", students[i].marks);
    printf("\n");
  }
  return 0;
}

/*
Output:

Roll Number: 1
Name: Student1
Marks: 90.50

Roll Number: 2
Name: Student2
Marks: 85.00

Roll Number: 3
Name: Student3
Marks: 92.00

Roll Number: 4
Name: Student4
Marks: 88.00

Roll Number: 5
Name: Student5
Marks: 95.00

*/