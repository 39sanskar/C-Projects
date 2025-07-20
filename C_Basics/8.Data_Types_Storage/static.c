/*
Static variable is initialise only one time. its life is not defined with the function.

Static variable is not store in the stack.
1. Persistence: static variables retain their value between function calls.
2. Initialization: Automatically initialized to zero if no initial value is provided.
3. Function and File Scope: static variables can be local to a function or 
have file scope if declared outside of a function.
4. Internal Linkage: File-scope static variables are only visible within 
the file they are declared in, not externally.
5. Single Instance: The variable is allocated once and is not recreated with each function call.
*/

#include <stdio.h>
void incrementCounter(){
  // A static variable retains its value between function calls
  static int counter = 0; // it is global and its value is not change again and again
  counter++;
  printf("Counter is %d\n", counter);
}

int main(){
  for (int i = 0; i < 3; i++){
    // Each call will increment the counter
    incrementCounter();
  }
  // The counter retains its value between calls and is not reinitialized
  return 0;
}