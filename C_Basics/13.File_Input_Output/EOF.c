/*
1. Indicator: EOF is a constant used to indicate the end of a file or an error.

2. Value: Typically defined as -1 in C libraries.

3. Stream Checking: Functions like fgetc() use EOF to signal end of input stream.

4. Error Signaling: Can also signal an error if a file operation fails.

5. Loop Control: Often used in loops reading from
files to determine when to stop reading.
*/

#include <stdio.h>
int main(){
  FILE *filePointer = fopen("Important.txt", "r"); // "r" => reading a file 
  if (filePointer == NULL){
    perror("Error opening file");
    return 1;
  }

  int ch;
  // Continue until EOF
  while ((ch = fgetc(filePointer)) != EOF){
    putchar (ch);
  }

  fclose (filePointer);
  return 0;
}
