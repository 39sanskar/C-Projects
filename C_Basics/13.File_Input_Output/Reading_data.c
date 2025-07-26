/*
1. Functions: Use fgetc, fgets, fread, or fscanf to read from files.
2. Modes: Open the file in read mode ("r") or read/update mode ("r+").
3. Buffer Management: Ensure buffers are properly sized, especially
with fgets and fread.
4. Binary vs. Text: Choose read functions based on whether the file
is binary or text.
*/

#include <stdio.h>
int main(){
  FILE *file_pointer; // DECLARING A FILE POINTER
  char text[1024]; // creating array of character 

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("Important.txt", "r"); // r => stands for reading.
  // "Important.txt" => this is the relative path bec. this will exist in the same folder.
  if (file_pointer == NULL){
    printf("Error opening file");
    return 1;
  }

  // READING FROM FILE
  fgets(text, sizeof(text), file_pointer); // file_pointer se data text me put karna hai.

  printf("File contents: %s\n", text);

  // Important! must close file pointer
  fclose(file_pointer);
  return 0;
}