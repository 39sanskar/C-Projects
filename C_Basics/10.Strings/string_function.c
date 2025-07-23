#include <stdio.h>
#include <string.h>

int main() {
    char name1[50];  // For gets() (unsafe)
    char name2[50];  // For fgets() (safe)

    // Warning: gets() is unsafe and deprecated
    printf("Enter your name using gets() (UNSAFE): ");
    // gets(name1);  // ❌ Uncommenting this may give a compiler warning or crash your program

    // Instead of gets(), simulate it with scanf (just to show danger)
    scanf("%s", name1);  // Only reads up to first space
    printf("Using gets()/scanf: ");
    puts(name1);  // puts adds a newline automatically

    // Clear input buffer (to handle leftover newline)
    while (getchar() != '\n');

    // Safe alternative: fgets()
    printf("\nEnter your full name using fgets() (SAFE): ");
    fgets(name2, sizeof(name2), stdin);  // Reads spaces and includes newline if it fits

    // Remove trailing newline added by fgets()
    name2[strcspn(name2, "\n")] = '\0';

    // Output using puts()
    printf("Using fgets() and puts(): ");
    puts(name2);

    return 0;
}

/*
Enter your name using gets() (UNSAFE): Aman Mishra 
Using gets()/scanf: Aman

Enter your full name using fgets() (SAFE): Ajay Singh  
Using fgets() and puts(): Ajay Singh 
*/