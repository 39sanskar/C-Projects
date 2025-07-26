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
  FILE *file_pointer; // DECLARING A FILE POINTER
  //char buf[1024];

  // OPENING FILE WITH FILE NAME AND MODE
  file_pointer = fopen("Important.txt", "r"); // r => stands for reading.
  // "Important.txt" => this is the relative path bec. this will exist in the same folder.
  if (file_pointer == NULL){
    printf("Error opening file\n");
    return 1;
  }

  char c;
  do {
     c = fgetc(file_pointer);  // Read next character from file
     printf("%c", c);          // Print the character
  } while (c != EOF);           // Loop until End Of File


  // Important! must close file pointer
  int result = fclose(file_pointer); // Close the file it is prevent to leak resources.
  if (result == 0){
    file_pointer = NULL;
  } else {
    printf("File was not closed properly.\n");
    return 1;
  }
  
  return 0;
}

/*
Detailed Explanation:

1. . Declaration of File Pointer

FILE *file_pointer;

FILE * is a pointer to a FILE object. It’s used to refer to the file you're working with.
file_pointer will hold the address of the file structure after opening the file.

2. Opening the File

file_pointer = fopen("Important.txt", "r");

"Important.txt" is the file to open.
"r" means read mode. This assumes the file already exists.
If it doesn't exist, fopen() returns NULL.

3. Checking for Errors

if (file_pointer == NULL){
    printf("Error opening file\n");
    return 1;
}

If the file cannot be opened (maybe it doesn't exist), file_pointer will be NULL.
It prints an error message and returns 1 to indicate failure.

4. Reading the File Character by Character

char c;
do {
    c = fgetc(file_pointer);  // Read next character from file
    printf("%c", c);          // Print the character
} while (c != EOF);           // Loop until End Of File

fgetc() reads a single character at a time from the file.
The loop continues until it reads EOF (End of File), which is a constant representing end of file.
EOF is usually defined as -1.

Note: This loop will also print EOF, which is not a printable character. A slightly better version would check before printing:

while ((c = fgetc(file_pointer)) != EOF) {
    printf("%c", c);
}

5. Closing the File

int result = fclose(file_pointer);

fclose() closes the file and releases system resources.
It returns 0 if successful, otherwise non-zero.

if (result == 0){
    file_pointer = NULL; // Set pointer to NULL as a good practice.
} else {
    printf("File was not closed properly.\n");
    return 1;
}


Good practice to set pointer to NULL after closing.
If file couldn't be closed, print an error and return 1.

Summary:

| Step    | What it does                                       |
| ------- | -------------------------------------------------- |
| Declare | `FILE *file_pointer` to manage the file            |
| Open    | `fopen("filename", "r")` to read                   |
| Check   | `if (file_pointer == NULL)` handles file-not-found |
| Read    | `fgetc()` to read and print characters             |
| Close   | `fclose()` to free system resources                |

Bonus Tips:
If Important.txt is not in the same directory, use an absolute or correct relative path.

while ((c = fgetc(file_pointer)) != EOF)
    putchar(c);

*/