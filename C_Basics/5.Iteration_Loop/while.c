/*
Needs of loops
1. Code that runs multiple times based on a
condition.
2. Repeated execution of code.
3. Loops automate repetitive tasks.
4. Types of Loops: while, for, do-while.
5. Iterations: Number of times the loop runs.
*/

/*
While loop => this is the first loop
Initialization
Condition
Updation

1. Iterations: Number of times the loop runs.
2. Used for non-standard conditions.
3. Repeating a block of code while a condition is true.
4. Remember: Always include an update to avoid infinite loops.

*/

#include <stdio.h>

int main(){

  // Ascending Order
  int num = 1; //Initialization
  while(num <= 10){  // condition
    printf("%d\n", num);
    num = num + 1;  // Updation 
  }
  printf("First Loop has ended\n");

  // Decending Order 
  int num2 = 10;
  while(num2 > 0){
    printf("%d\n", num2);
    num2 --;
  }
  printf("Second Loop has ended:\n");
  return 0;
}