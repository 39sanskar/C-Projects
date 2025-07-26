#include <stdio.h>
int main(){
  // Open the file for writing
  FILE *filePointer = fopen("appending.txt", "a"); // "a" => appending data to a file (basically it is append the data in the file.)
  if (filePointer == NULL){
    printf("Error opening file");
    return 1;
  }

  // write formatted text to the file
  fprintf(filePointer, "Appending a new line\n");
  fprintf(filePointer, "The sum of %d and %d is %d.\n", 3, 7, 3 + 7);
  fclose (filePointer); // Close the file 
  return 0;
}
