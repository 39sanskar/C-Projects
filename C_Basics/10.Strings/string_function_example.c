/*
1. fgets():
• Safe Input: Reads a string from a file or stdin(Standard input from terminal) safely into a buffer.
• Limits Length: Takes the maximum size to read, preventing buffer overflow.
• Includes Newline: Can include the newline character (\n) if it fits in the buffer.
2. puts():
• Simple Output: Writes a string to stdout and appends a newline automatically.
• No Format Specifiers: Directly prints the string without formatting options.
3. gets() (Not Recommended):
• Unsafe Input: Reads a string from stdin until a newline or EOF without size limits.
• Buffer Overflow: Prone to overflow, leading to security vulnerabilities.
• Deprecated: Removed from the C11 standard due to its risks.
*/

#include <stdio.h>
int main(){
  char str[50];

  printf("Enter a string gets: ");
  // gets(str); // UNSAFE: Do not use in production code

  printf("\nYou entered (gets): ");
  puts(str); // Outputs the string followed by a newline

  printf("\nEnter a string using fgets: ");
  fgets(str, sizeof(str), stdin); // Safe alternative to gets()

  printf("\nYou entered (fgets): ");
  puts(str); // Outputs the string followed by a newline
  return 0;
}