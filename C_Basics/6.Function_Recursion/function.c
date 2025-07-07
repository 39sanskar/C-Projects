/*
Function is also a type of control statement.
1. Definition: Blocks of reusable code.
2. DRY Principle: "Don't Repeat Yourself" it encourages code reusability.
3. Usage: Organizes code and performs specific tasks.
4. Naming Rules: Same as variable names: snake_case

Definition
1. Follows same rules as variable names.
2. Use () to contain parameters.
3. Fundamental for code organization and reusability.
*/

/*
Function Prototype
1. Definition: Specifies function name, return type, and parameters without the body.
2. Purpose: Enables type checking and forward declaration of functions.
3. Parameter Names Optional: Only types required in prototypes.
4. Placement: Often at the start of a C file or in a header file.

Function Call 
Invoke by using the function name followed by ()
*/

#include <stdio.h>

void count_to_100(); // Function Prototype 
int sum(int, int);  // Function Prototype
int main(){
  count_to_100(); // function Call
  int add = sum(4, 5); // function call
  printf("the sum is: %d\n", add);

  
  int x = 9;
  int y = 54;
  int z = sum(x, y);
  printf("The sum is: %d\n", z);
  return 0;
}

void count_to_100(){ // Function Definition
  for (int i = 1; i<10; i++) {
    printf("%d\n", i);
  }
}

int sum(int first, int second) { // Function Declaration 
  int addition = first + second;
  return addition;
}

/*
Return Statement

1. Sends a value back from a function.
2. What Can Be Returned: Value, variable, calculation, etc.
3. Return ends the function immediately.
4. Function calls make code jump around.
5. Prefer returning values over using global variables.
*/

/*
1. Parameters: Variables in a function definition, acting as placeholders.
2. Arguments: Actual values passed to a function at call time.
*/