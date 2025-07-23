#include <stdio.h>

int main() {
    // 1. Initialize using a string literal (automatic null terminator '\0')
    char str1[] = "Hello";

    // 2. Initialize with individual characters (including '\0' manually)
    char str2[] = { 'W', 'o', 'r', 'l', 'd', '\0' };

    // 3. Initialize a fixed-size array with a string
    char str3[10] = "C Lang";

    // 4. Pointer to a string literal (read-only)
    const char *str4 = "Pointer String";

    // Printing all initialized strings
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("String 3: %s\n", str3);
    printf("String 4: %s\n", str4);

    return 0;
}

/*
What is a proper C string?
In C, a string is just a character array that ends with a null terminator ('\0').
*/

/*
Explanation:
char str1[] = "Hello"; — Automatically adds \0 at the end.
char str2[] = { 'W', 'o', 'r', 'l', 'd', '\0' }; — Manual null terminator.
char str3[10] = "C Lang"; — Fills remaining space with \0.
const char *str4 = "Pointer String"; — Pointer to string literal (stored in read-only memory).
*/