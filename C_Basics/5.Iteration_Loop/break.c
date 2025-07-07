/*
Break statement

1. Break lets you stop a loop early, or break out of a loop.

2. Exits Loops: Ends for, while, do-while loops early.

3. Ends Switch Cases: Prevents fall-through in switch cases.

4. Immediate Effect: Immediately leaves the loop/switch.

5. Controls Flow: Alters program flow for efficiency.

6. Use Wisely: Important for readability.

*/

#include <stdio.h>
int main(){

    // Using break inside for loop to terminate
  	// after 2 iterations
    printf("break in for loop\n");
    for (int i = 1; i < 5; i++) {
        if (i == 3) {
            break;
        }
        else {
            printf("%d ", i);
        }
    }

    // using break inside while loop to terminate
  	// after 2 iterations
    printf("\nbreak in while loop\n");
    int i = 1;
    while (i < 20) {
        if (i == 3)
            break;
        else
            printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}


/*

Explanation: In this code, the break statement is used in both a for and while loop to terminate after two iterations. 
In both loops, numbers 1 and 2 are printed, and when i reaches 3, the break statement exits the loop, stopping further iterations. 
This demonstrates how break can be used to stop execution based on a specific condition.

The working of the break statement in C is described below:

1. STEP 1: The loop execution starts after the test condition is evaluated.
2. STEP 2: If the break condition is present the condition will be evaluated.
3. STEP 3A: If the condition is true, the program control reaches the break statement 
and skips the further execution of the loop by jumping to the statements directly below the loop.

4. STEP 3B: If the condition is false, the normal flow of the program control continues.

*/