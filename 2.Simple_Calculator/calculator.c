#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"

double division(double, double);
double modulus(int, int);
long long factorial(int);
void print_menu();

double toRadians(double degrees) {
  return degrees * M_PI / 180.0;
}

int main() {
    char input[50];
    int choice;
    double first, second, result = 0, memory = 0; // memory initialized to 0

    while (1) {
        print_menu();
        scanf("%d", &choice);
        scanf("%49s", input); // take input as string to avoid crashes

        // Check if all characters are digits
        int isNumber = 1;
        for (int i = 0; input[i] != '\0'; i++) {
            if (!isdigit((unsigned char)input[i])) {
                isNumber = 0;
                break;
            }
        }

        if (!isNumber) {
            printf(RED "Please enter a valid input!\n" RESET);
            continue; // Go back to the menu
        }

        if(choice == 19) {
          printf(GREEN "\nExiting... Thank you for using the calculator!\n" RESET);
          break;
        }

        if(choice < 1 || choice > 19) {
          fprintf(stderr, RED "Invalid Menu Choice.\n" RESET);
          continue;
        }
        // Memory functions
        if (choice == 16) { // Memory Store
            memory = result;
            printf(GREEN "Stored %.6f in memory.\n" RESET, memory);
            continue;
        }
        if (choice == 17) { // Memory Recall
            printf(GREEN "Recalled value from memory: %.6f\n" RESET, memory);
            result = memory;
            continue;
        }
        if (choice == 18) { // Memory Clear
            memory = 0;
            printf(GREEN "Memory cleared.\n" RESET);
            continue;
        }

        // One-number operations
        if (choice >= 7 && choice <= 15) {
           printf("\nEnter the number: ");
           scanf("%lf", &first);

            switch (choice) {
                case 7: // Square root
                    if(first < 0) {
                      fprintf(stderr, RED "Square root of negative number is not possible!\n" RESET);
                      continue;
                    }
                    result = sqrt(first);   // Square Root 
                    break;
                case 8: // Factorial
                    if(first < 0 || floor(first) != first) {
                      fprintf(stderr, RED "Factorial only works for non-negative integers!\n" RESET);
                      continue;
                    }
                    printf(GREEN "\nResult: %lld\n" RESET, factorial((int)first));
                    continue;
                case 9: result = sin(toRadians(first)); break;
                case 10: result = cos(toRadians(first)); break;
                case 11: result = tan(toRadians(first)); break;
                case 12:
                    if(first <= 0) {
                      fprintf(stderr, RED "Logarithm base 10 undefined for non-positive numbers!\n" RESET);
                      continue;
                    }
                    result = log10(first);
                    break;
                case 13:
                    if(first <= 0) {
                      fprintf(stderr, RED "Natural log undefined for non-positive numbers!\n" RESET);
                      continue;
                    }
                    result = log(first);
                    break;
                case 14: result = cbrt(first); break; // Cube root
                case 15: result = exp(first); break; // NEW e^x
            }
            printf(GREEN "\nResult: %.6f\n" RESET, result);
            continue;
        }
        // Two-number operations
        printf("\nEnter the first number: ");
        scanf("%lf", &first);
        printf("Enter the second number: ");
        scanf("%lf", &second);

        switch (choice) {
          case 1: result = first + second; break;
          case 2: result = first - second; break;
          case 3: result = first * second; break;
          case 4: result = division(first, second); break;
          case 5: result = modulus((int)first, (int)second); break;
          case 6: result = pow(first, second); break;
        }

        if(!isnan(result)) { 
          // !isnan(result) → means "only proceed if result is not NaN". (NAN => it is Not a Number.)
          printf(GREEN "\nResult: %.6f\n" RESET, result);
        } else {
          printf(RED "\nError: Invalid mathematical operation (NaN)\n" RESET);
        }
    }

    return 0;
}

double division(double a, double b) {
    if(b == 0) {
      fprintf(stderr, RED "Error: Division by zero!\n" RESET);
      return NAN;
    }
    return a / b;
}

double modulus(int a, int b) {
    if(b == 0) {
      fprintf(stderr, RED "Error: Modulus by zero!\n" RESET);
      return NAN; // NAN => Not a Number
    }
    return a % b;
}

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

void print_menu() {
  printf(BLUE "\n\n---------------------------------\n" RESET);
  printf(CYAN "       Scientific Calculator\n" RESET);
  printf(BLUE "---------------------------------\n" RESET);
  printf(YELLOW "1.  Add\n" RESET);
  printf(YELLOW "2.  Subtract\n" RESET);
  printf(YELLOW "3.  Multiply\n" RESET);
  printf(YELLOW "4.  Divide\n" RESET);
  printf(YELLOW "5.  Modulus\n" RESET);
  printf(YELLOW "6.  Power\n" RESET);
  printf(YELLOW "7.  Square Root\n" RESET);
  printf(YELLOW "8.  Factorial\n" RESET);
  printf(YELLOW "9.  Sine (degrees)\n" RESET);
  printf(YELLOW "10. Cosine (degrees)\n" RESET);
  printf(YELLOW "11. Tangent (degrees)\n" RESET);
  printf(YELLOW "12. Logarithm base 10\n" RESET);
  printf(YELLOW "13. Natural Log (ln)\n" RESET);
  printf(YELLOW "14. Cube Root\n" RESET);
  printf(YELLOW "15. e^x\n" RESET);
  printf(YELLOW "16. Memory Store (MS)\n" RESET);
  printf(YELLOW "17. Memory Recall (MR)\n" RESET);
  printf(YELLOW "18. Memory Clear (MC)\n" RESET);
  printf(YELLOW "19. Exit\n" RESET);
  printf(CYAN "Enter your choice: " RESET);
}

/*
How the new memory system works:
15 → Memory Store (MS): Saves the last calculation result.
16 → Memory Recall (MR): Loads the saved value as the current result.
17 → Memory Clear (MC): Resets stored memory to 0.
*/

/*
How the formula works 

The conversion formula is:

      radians = degrees × π/180
 
M_PI → A constant from math.h representing π (≈ 3.141592653589793).
180.0 → Using .0 ensures it's a floating-point division, not integer division.
Multiplying degrees by M_PI / 180.0 changes them into radians.

*/

/*
if (!isnan(result)) { 
    // !isnan(result) → means "only proceed if result is not NaN". (NaN => Not a Number.)
    printf(GREEN "\nResult: %.6f\n" RESET, result);
}

Here’s what’s happening step-by-step:
1.isnan(result)
  -Comes from <math.h>.
  -Returns true (1) if result is NaN (Not a Number).
  -NaN happens in C when an operation’s result is undefined  for example:

  double x = 0.0 / 0.0;  // produces NaN

2. !isnan(result)
  -This is the negation of isnan(result).
  -Means “proceed only if result is not NaN”.  

3. Why it’s useful in your calculator
  -Prevents printing meaningless results when math fails, like dividing 0/0 or sqrt(-1) in real numbers.
  -Instead, you could also add an else to display an error message:

  if (!isnan(result)) {
    printf(GREEN "\nResult: %.6f\n" RESET, result);
  } else {
    printf(RED "\nError: Invalid mathematical operation (NaN)\n" RESET);
  }
  
*/