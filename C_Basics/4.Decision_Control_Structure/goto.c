/*
goto is only avilable in the c. it is mostly discourage not more use.
This is a control statement. if you want to directly jump in the particular label: in the code then you use goto.
*/

/*
1. Unconditional Jump: goto directs the flow to a specific label.

2. Label Usage: Defined by a name and colon (e.g., myLabel:).

3. Limited Scope: Target label must be in the same function.

4. Selective Use: Useful for exiting nested loops or error
handling, but generally discouraged.

5. Drawbacks: Can lead to hard-to-follow code.
*/

#include <stdio.h>
int main(){
  int num;
  input_number:    // Label for goto (use colon :)
  printf("Please enter the number: ");
  scanf("%d", &num);

  if (num != 10) {
    goto input_number; // you will be write goto any-where it is unconditional jump.
  }
  return 0;
}
