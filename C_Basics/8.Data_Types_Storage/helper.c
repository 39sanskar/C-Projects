// helper.c file

#include <stdio.h>
// Definition and initialization of external variable 
int extVar = 42;  // variable declaration 
void printExtVar(){
  printf("External Variable is: %d\n", extVar);
}

/*
Explanation:
1. extern int extVar; in main.c tells the compiler:
“Hey, this variable exists somewhere else — don’t allocate memory for it here.”
2. int extVar = 42; in helper.c actually defines and allocates memory for it.
3. The linker connects them during compilation.
*/

/*
To Compile and Run (in terminal)
gcc main.c helper.c -o external_demo
./external_demo
*/