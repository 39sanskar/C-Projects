/*
1. fclose() Function: Used to close an open file pointed to by a FILE*  pointer.

2. Release Resources: Frees up the system resources associated with the file.

3. Flush Buffer: Writes any remaining data in the file buffer to the file.

4. Nullify Pointer: Good practice to set the file pointer to NULL after closing.

5. Error Handling: Check the return value for successful closure (0 is
successful, EOF is an error).
*/

#include <stdio.h>
int main(){
  FILE *file_pointer; // DECLARING A FILE POINTER
  char buf[1024];

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("Important.txt", "r"); // r => stands for reading.
  // "Important.txt" => this is the relative path bec. this will exist in the same folder.
  if (file_pointer == NULL){
    printf("Error opening file\n");
    return 1;
  }

  // READING FROM FILE
  fgets(buf, sizeof(buf), file_pointer);

  printf("File contents: %s\n", buf);

  // Important! must close file pointer
  int result = fclose(file_pointer); // Close the file it is prevent to leak resources.
  if (result == 0){
    file_pointer = NULL;
  } else {
    printf("File was not closed properly.");
    return 1;
  }
  
  return 0;
}
