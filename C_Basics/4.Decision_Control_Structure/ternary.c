/*
1. Syntax: condition ? expression1 : expression2
2. Condition: Boolean expression, evaluates to true or false.
3. Expressions: Both expressions must return compatible types.
4. Use Case: Suitable for simple conditional assignments.
5. Readability: Good for simple conditions, but can reduce clarity if overused.
*/

/*
Concept => Syntax: condition ? expression1 : expression2  
if condition is true then expression 1 is execute otherwise expression 2 is execute 
here question marh is treted as if.
ternary is a simplification of the if => condition ? true : false
*/

#include <stdio.h>
int main(){
  char gender;
  printf("Please enter your gender?(M/F): ");
  scanf(" %c", &gender);

  gender == 'M' ? printf("Male\n"): printf("Female\n");
  return 0;
}
