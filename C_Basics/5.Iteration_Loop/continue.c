/*
Continue statement
1. Continue is used to skip one iteration or the current iteration.

2. Next Iteration: Immediately starts the next iteration of the loop.

3. In while loop remember to do the increment manually before using continue.

4. Used in Loops: Works within for, while, do-while loops.

5. Not for switch: Unlike break, not used in switch statements.

6. Improves Logic: Helps in avoiding nested conditions within loops.
*/

#include <stdio.h>
int main(){
  int n = 1;

  // Loop from 1 to 10
  while (n <= 10) {
    // If the number is even, skip iteration
    // to avoid printing it
    if (n % 2 == 0) {
      n++;  // In while loop remember to do the increment manually before using continue.
      continue; // it skip the current iteration.
    }
    printf("%d ", n);
    n++;
  }
  printf("\n");

  // Using continue in for loop (here no manually increnent)
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
}


/*
int main(){
  int num2 = 1;
  while(num2 <= 100){
    printf(".");
    if (num2 % 2 == 0) {
      // num2++;
      continue;  // it stuck in the infinite loop so In while loop remember to do the increment manually before using continue.
    }
    printf("%d\n", num2);
    num2 ++;
  }
  return 0;
}

*/