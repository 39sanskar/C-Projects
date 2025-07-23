/*
1. Structure: Think of as an array of arrays, often used to represent matrices or grids.
2. Declaration: int arr[3][4]; for 3 rows and 4 columns.
3. Initialization: int arr[2][2] = {{1, 2}, {3, 4}};.
4. Accessing Elements: Use row and column indices, e.g., arr[0][1] for the first row's second element.
5. Memory Layout: Stored in row-major order, meaning rows are stored in contiguous memory locations.
*/

#include <stdio.h>
int main() {
  int marks[2][3]; // it store 2 students(row) 3 subject(column) marks.
  for (int row = 0; row < 2; row++){
    for (int col = 0; col < 3; col++){
      printf("Enter the marks for student: %d, Subject: %d: ", row + 1, col + 1);
      scanf(" %d", &marks[row][col]);
    }
  }
  return 0;
}