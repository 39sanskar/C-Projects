/*
1. Functions: Use fputc, fputs, fwrite, or fprintf for writing data.

2. Open Modes: Open file in write ("w"), append ("a"), or update ("w+", "a+") mode.

3. Buffer Flushing: fflush() forces write buffer to flush, ensuring data is saved.

4. Text vs. Binary: Choose write function and mode based on file type (text or binary).
*/
#include <stdio.h>
int main(){
  // Open the file for writing
  FILE *filePointer = fopen("writing.txt", "w"); // "w" => writing a file (basically it is overwite in the previous data)
  if (filePointer == NULL){
    printf("Error opening file");
    return 1;
  }

  // write formatted text to the file
  fprintf(filePointer, "Honesty is the best policy!\n");
  fprintf(filePointer, "The square of %d is %d.\n", 5, 5*5);
  fclose (filePointer); // Close the file 
  return 0;
}
