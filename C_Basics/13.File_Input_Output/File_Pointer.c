/*
1. Variable Type: A file pointer is of type FILE* and is used to reference a file.

2. Standard Files: C automatically provides file pointers like stdin, stdout, and stderr .

3. Opening Files: File pointers are associated with a file on disk through the fopen function.

4. Reading/Writing: They are used for reading from or writing to files with functions 
like fread, fwrite, fprintf, fscanf, etc.

5. Position Tracking: Keeps track of the current position within the
file for read/write operations.

6. Closing Files: Should be passed to fclose to close the file and release resources.
*/

#include <stdio.h>
int main(){
  FILE *file_pointer; // DECLARING A FILE POINTER
  char buf[1024];

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("Important.txt", "r"); // r => stands for reading.

  // READING FROM FILE
  fgets(buf, sizeof(buf), file_pointer);

  printf("File contents: %s\n", buf);

  // Important! must close file pointer
  fclose(file_pointer);
  return 0;
}

