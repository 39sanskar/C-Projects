#include <stdio.h>
void function(){
  // An auto variable (through auto keyword is usually omitted)
  int autoVar = 10;
  printf("The value of autoVar is: %d\n", autoVar);
  // autoVar is destroyed here as it goes out of scope 

}

int main(){
  function(); // Calls function with auto variable 
  // function() has finished; autoVar is no longer accessible
  return 0;
}

/*
1. Default Class: Variables within a function are auto by default if no other storage class
specifier is provided.
2. Stack Storage: auto variables are typically stored on the stack.
3. Function Scope: They are local to the block in which they are defined.
4. No Initial Value: Typically have an undefined initial value unless explicitly initialized.
5. Lifetime: Created when block is entered and destroyed when it is exited.
*/