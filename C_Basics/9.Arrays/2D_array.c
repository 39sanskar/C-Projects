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


/*
Multi-Dimensional Array

1. Generalization: Extend two-dimensional arrays to more dimensions, like 3D for cubes or higher .
2. Declaration: Specify each dimension, e.g., int arr[2][3][4] for a 3D array.
3. Initialization: Nested braces for dimensions, e.g., int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};.
4. Element Access: Use indices for each dimension, e.g., arr[1][0][1] for a 3D array element.
5. Row-major Order: Memory layout continues with elements stored in contiguous locations, dimension by dimension.

*/