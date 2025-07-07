/*
1. Executes block first, then checks condition.
2. Guaranteed to run at least one iteration.
3. Unlike while, first iteration is unconditional.
4. Don't forget to update condition to avoid infinite loops.
*/

#include <stdio.h>
int main(){
  int i = 1;
  do {
    printf("%d\n", i);
    i++;
  } while (i <= 10);

  // Using do-while loop (it execute atleast once.)
  int num;
  do {
    printf("Please enter the number: ");
    scanf("%d", &num);
  } while (num != 10);
  printf("Congrats you have gussed the correct number\n");return 0;
}

/*
Infinite-loops
1. Endless Execution: They run continuously.

2. Purposeful or Accidental: Used deliberately or by mistake.

3. Exit Strategy: Require break or similar statements for stopping.

4. Resource Intensive: May cause high CPU
*/