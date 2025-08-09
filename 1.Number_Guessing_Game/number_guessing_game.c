#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Terminal color codes
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define RESET   "\033[0m"

/*
These are ANSI escape codes for terminal text colors.
RED → Bright red, GREEN → Bright green, etc.
RESET → Resets text color back to normal after printing.
*/

/*
stdio.h → For printf & scanf (input/output).
stdlib.h → For rand() & srand() (random numbers).
time.h → For time() (used in seeding RNG).
*/
int main(){
  /*
  Program execution starts here.
  Returns int to indicate the program’s status to the OS.
  */
  int secretNumber, guess;
  int attempts = 0;
  /*
  random → will store the secret number the user has to guess.
  guess → will store the number entered by the user.
  attempts → keeps track of how many guesses the user made.
  */
 
  // Seed random number generator
  srand(time(NULL));
  /*
  Seeds the rand() function with the current time in seconds.
  This ensures each time you run the program, you get different random numbers.
  If you don’t seed, rand() will generate the same sequence every run.
  rand() * 100 + 1, which could give huge numbers like 100000+
  */
 
  secretNumber = (rand() % 100) + 1;  // Generating between 1 to 100
  /*
  This ensures:
  % 100 → gives a value from 0 to 99.
  + 1 → shifts it to 1 to 100.
  */

  printf(BLUE "Welcome to the Number Guessing Game!\n" RESET);
  printf(YELLOW "I have picked a number between 1 and 100.\n" RESET);

  // Game loop 
  do {
    printf("\nPlease enter your guess: ");
    scanf("%d", &guess);
    attempts++;
    
    if(guess < secretNumber) {
      printf(RED "Too low! Try guessing a larger number.\n" RESET);
    } 
    else if (guess > secretNumber) {
      printf(RED "Too high! Try guessing a smaller number.\n" RESET);
    } 
    else {
      printf(GREEN "\n🎉 Congratulations! You guessed the number in %d attempts!\n" RESET, attempts);
    }
  } while( guess != secretNumber);
  // The loop repeats until the guess matches the secret number.

  printf(BLUE "\nThanks for playing!\n" RESET);
  printf(GREEN "Developed by: Sanskar Mishra\n" RESET);

  return 0; // Signals successful program termination to the OS.

}

/*
I used the RESET word in the code because when you print colored text in the terminal using ANSI escape codes, the color will stay active until you turn it off.
*/