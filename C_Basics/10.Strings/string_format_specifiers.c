/*
1. Output: %s is used with printf to output a string.
2. Input: %s is used with scanf to read a string into a character array. It stops reading upon encountering
whitespace, a newline, or EOF.

3. No & with scanf: Unlike other data types, when using %s with scanf, you don't prefix the variable
name with & because a string name acts as a pointer.

4. Safety: To prevent buffer overflow with scanf, specify a maximum field width, e.g., %9s for a char array of size 10.
*/

#include <stdio.h>

int main() {
    char name[50];
    char city[50];

    // %s reads a word (stops at space)
    printf("Enter your first name: ");
    scanf("%s", name);

    // Use of string with printf
    printf("Hello, %s!\n", name);

    
    return 0;
}
