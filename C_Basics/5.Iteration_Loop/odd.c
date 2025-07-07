/*

Odd loop => execution of a loop an unknown number of times.

1. Condition-Driven: Run until a specific condition is fulfilled.

2. While and Do-While: Commonly used for indeterminate iterations.

3. Dynamic Iteration: Iterations depend on changing conditions or input.

4. Break Usage: May use break for exit in any loop type.

5. Practical Use: Ideal for processing with unknown completion point.

6. Design Carefully: Important to avoid infinite loops by ensuring a valid exit condition.
*/

#include <stdio.h>

int main(){
  int num = 0;
  while (num != 10){
    printf("Please enter the number: ");
    scanf("%d", &num);
  }
  printf("Congrats you have guessed the correct number\n");
  return 0;
}