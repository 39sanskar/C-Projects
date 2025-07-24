#include <stdio.h>
int main(){
  // Declare and initialize a 2D array of characters
  // Each inner array represents a string
  char names[3][20] = {
    "Alice",
    "Bob",
    "Charlie"
  };
  // Modify a string 
  names[1][0] = 'R'; // Changing "Bob" to "Rob"

  // Printing all names
  for (int i = 0; i < 3; i++){
    printf("%s\n", names[i]);
  }

  // Accessing and printing a specific character
  // should print 'h'
  printf("Second character of the third name: %c\n", names[2][2]);
  return 0;
}

/*
1. Matrix of Characters: In a 2D array of characters each row represents a string.
2. String Array: Often used to store multiple strings of the same maximum length.
3. Null Termination: Each string in the array must end with a null character '\0’.
4. Fixed Width: All strings have a fixed maximum width, defined by the column size of the 2D array.
5. Row Access: Access a specific string (row) with single indexing, 
e.g., charArray[0] accesses the first string.
6. Character Access: Access individual characters with double indexing, e.g., charArray[1][2] 
accesses the 3rd character of the 2nd string.
7. Initialization: Can be initialized row by row using string literals,
e.g., char charArray[3][4] = {"abc", "def", "ghi"};.
*/