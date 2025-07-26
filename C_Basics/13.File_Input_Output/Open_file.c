/*
1. fopen() Function: Opens a file and returns a FILE* pointer for access.

2. Modes: Specify mode (r, w, a, etc.) to open for reading, writing, appending, etc.

3. Null on Failure: Returns NULL if the file cannot be opened.

4. Error Checking: Always check for NULL to confirm file was opened successfully.

5. Path: Can open files using relative or absolute paths.
*/

#include <stdio.h>
int main(){
  FILE *file_pointer; // DECLARING A FILE POINTER
  char buf[1024];

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("Important.txt", "r"); // r => stands for reading.
  // "Important.txt" => this is the relative path bec. this will exist in the same folder.
  if (file_pointer == NULL){
    printf("Error opening file");
    return 1;
  }

  // READING FROM FILE
  fgets(buf, sizeof(buf), file_pointer);

  printf("File contents: %s\n", buf);

  // Important! must close file pointer
  fclose(file_pointer);
  return 0;
}