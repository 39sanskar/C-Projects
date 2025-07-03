/*
1. scanf is used for reading formatted input,
2. Syntax: scanf("format specifier", &variable);
3. Use format specifiers (eg., %d for integers) to define the input type
4. Address Operator: Prefix variables with &, except for arrays and string.
*/

/*
int c;
printf("Enter a character:");
scanf("%c", &c);

"%c" => scanf reads a character which the user enters
&c => scanf puts that read value "At the address of" 'c' variable
*/

#include <stdio.h>

int main(){
  int age;
  printf("Please enter your age: ");
  scanf("%d", &age);

  printf("your age is: %d", age);
  return 0;
}

