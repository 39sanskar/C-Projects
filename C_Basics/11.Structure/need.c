#include <stdio.h>
int main (){
  int rollno[5] = {1, 2, 3, 4, 5};
  char names[5][20] = {"Ram", "shyam", "Sita", "Geeta"};
  float marks[5] = {45.5, 78.9, 90, 95.5, 99.9};

  for(int i = 0; i < 5; i++){
    printf("\nStudent name: %s, RollNo: %d, Marks: %.2f", names[i], rollno[i], marks[i]);
  }
  return 0;
}

/*
Need of the Structure

1. Grouping Data: Structures allow related data items of different types to be
grouped together under a single name.
2. Modelling Real-world Entities: Enable the representation of complex entities (e.g.,
a student, a point in space) more naturally.
3. Ease of Handling: Simplify passing multiple data items as a single argument to
functions.
4. Data Encapsulation: Encapsulate related data, enhancing code readability and
maintainability.
5. Type Definition: Allow the creation of new data types tailored to specific needs.
*/