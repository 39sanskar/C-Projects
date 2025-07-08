/*
Recursion :
📌 Definition:
Recursion is when a function calls itself to solve a smaller part of the problem.
It keeps calling itself until it reaches a base case, which is a condition that stops the recursion.

1. Self-Calling: A function that calls itself to solve sub-problems.
2. Base Case: Essential to stop recursion and prevent infinite loops.
3. Recursive Case: The condition under which the function keeps calling itself.
4. Stack Usage: Consumes stack space with each call, risk of overflow.
5. Applications: Ideal for divisible tasks, tree/graph traversals, sorting algorithms.
6. Memory Intensive: More overhead than iterative solutions.
7. Clarity: Often simplifies complex problems.
*/

/*
Stack:

1. LIFO: Last-In, First-Out operation; the last element added is the first to be removed.
2. Operations: Mainly push (add an item) and pop (remove an item).
3. Top Element: Only the top element is accessible at any time, not the middle or bottom ones.
4. Overflow and Underflow: Overflow when full, underflow when empty during operations.
*/

/*
Recursion Stack:

1. Memory Allocation: Recursive calls add frames to the call stack for variables and return points.
2. Growth with Depth: Deeper recursion equals more stack space.
3. Base Case: Essential to limit recursion depth and prevent stack overflow.
4. Stack Overflow Risk: Excessive recursion depth can crash the program.
5. Tail Recursion Optimization: Can reduce stack usage for certain recursive patterns.
6. Efficiency: Iterative solutions may be more stack-efficient than recursion for some problems.
*/

#include <stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);
int main(){
  int res = factorial_using_loop(4);
  printf("Factorial using loop: %d\n", res);

  int res2 = factorial_using_recursion(5);
  printf("Factorial using recursion: %d\n", res2);
  return 0;
}

int factorial_using_recursion(int num){
  if (num == 0){
    return 1;
  }
  return num * factorial_using_recursion(num - 1);
}
int factorial_using_loop(int num){
  int result = 1;
  for (int i = 2; i<= num; i++){
    result *= i;
  }
  return result;
}
