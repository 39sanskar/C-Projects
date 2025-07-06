/*
1. Multi-way Branching: switch provides a cleaner
method for multi-way branching than multiple if-else
statements when testing the same expression.

2. Integer or Character Expressions: The switch
expression must result in an integer or character value,
used to match case labels.

3. Case Labels: Represents individual branches. Execution
jumps to the matching case label.

4. Break Statement: Typically used to exit the switch block
after a case is executed to prevent "fall through" to
subsequent cases.

5. Default Case: Optional. Executes if no case matches.
Placed at the end of the switch block.

6. Enhances Readability: For certain types of conditional
logic, switch can make the code more readable
compared to nested if-else statements.
*/

/*
if break is not apply then it execute all the statement after particular statement match. and inside case their are multiple statement may exist.
in the switch statement default is treated as else 
*/

#include <stdio.h>
int main(){
  int day;
  printf("Please enter day number between(1-7): ");
  scanf("%d", &day);

  switch(day){
    case 1: 
      printf("Today is Monday:\n");
      break;
    case 2: 
      printf("Today is Tuesday:\n");
      break;
    case 3: 
      printf("Today is Wednesday:\n");
      break;
    case 4: 
      printf("Today is Thursday:\n");
      break;
    case 5: 
      printf("Today is Friday:\n");
      break;
    case 6: 
      printf("Today is Saturday:\n");
      break;
    case 7: 
      printf("Today is Sunday:\n");
      break;
    default:
      printf("Day entered is incorrect. Please enter day in between(1-7):\n");
      break;
  }

  printf("Day Calculation complete.\n");
  return 0;
}

/*
How to decide where to use switch vs if-else.
1. Scope of Comparison: switch
tests equality for one variable;
if-else can evaluate complex
conditions.

2. Float expression cannot be
tested using a switch.

3. Multiple cases cannot use same
expressions.

4. Readability: switch is cleaner for many discrete values; if-else
is more versatile.

5. Performance: switch might be faster for many cases due to
compiler optimizations.

6. Fall-through: switch allows case fall-through; if-else executes
only one matched block.

*/