/*
Register => it has fastest memory. in the register their is no address avilable.(address is avilable in the ram.)
1. CPU Register: Hints(Request) to the compiler that the variable should be stored in a CPU register for faster access.
2. Limited Size: Can only be applied to variables that can fit within a CPU register.
3. No Memory Address: Cannot use the address-of operator (&) on a register variable since it might not
have a memory address.
4. Function Scope: Local to the function or block they are defined in, similar to auto.
5. Quick Access: Intended for variables that are heavily used, such as counters in loops.
*/

#include <stdio.h>
int main(){
  // Suggests storing counter in a register
  register int counter;
  for (counter = 0; counter < 5; ++counter){
    printf("Counter is %d\n", counter);
  }

  // Note: Attempting to get the address of counter.
  // like &counter, will cause a compiler error
  return 0;
}