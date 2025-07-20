/*
External Variable

1. External Linkage: extern variables are defined in another file or outside of any function, allowing them to be
accessed across multiple files.
2. Global Access: Enables variables to be shared between different program files.
3. Declaration vs. Definition: An extern declaration in one file references the 
variable's memory location defined in another file without allocating space for it.
4. No Initialization: Typically, extern variables are not initialized with the declaration.
5. Use Case: Useful for global variables that need to be accessed by multiple functions across different files.
*/

// main.c
#include <stdio.h>

// Declaration of an external variable (defined in helper.c)
extern int extVar;

void printExtVar(); // Declaration of function defined in helper.c 

int main(){
  printExtVar(); // Use extVar from another file
  return 0;
}

/*
To Compile and Run (in terminal)
gcc main.c helper.c -o external_demo
./external_demo

*/
