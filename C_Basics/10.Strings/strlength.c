#include <stdio.h>
#include <string.h>

int main(){
  char name[50]; // This is the maximum length of the name
  printf("Please enter your name: ");
  fgets(name, 50, stdin);

  // Remove newline character if present
  name[strcspn(name, "\n")] = '\0';

  int size = strlen(name);
  printf("The length of your name is: %d\n", size);
  return 0;
}
/*
Concept:
Returns the length of a string, not including the terminating null byte ('\0').
*/

/*
Explanation:
When you use fgets(name, 50, stdin), (it includes the newline character \n that the user types when pressing Enter).
So, the string "Aman Mishra\n" actually has:
"Aman" → 4 characters
" " → 1 space
"Mishra" → 6 characters
"\n" → 1 newline character
"\0" → 1 null terminator (not counted by strlen, but stored)
So, total:
4 + 1 + 6 + 1 (newline) = 12
strlen() counts this 12 characters.

But you are seeing 13, which may be due to one more character (rare cases: carriage return \r on some systems, like Windows, or if copy-pasting).
*/