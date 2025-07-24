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
