/*
Address Storage: Pointers store memory addresses of
other variables rather than data itself.
Example:  (int i = 3);
in the ram memeory:
i -----> location name
3 -----> value at location
65524 ----> location number(address)

when a progeram is running only ram is using.
Address Operator: The ampersand & gets the
address of a variable
*/

#include <stdio.h>
int main(){
  int i = 3;
  printf("Address of i = %p\n", &i);
  printf("Value of i = %d\n", i);
  printf("Value of i = %d\n", *(&i)); //it print the value at the address.
  return 0;
}  

/*
i ----> location name.
&i ----> Address of the i variable.
*(&i) ----> it take the value at the address.

* Operator is called Value at address operator. This operator is
used to get the value from a particular address.

Basically * and & are opposite to each other.
*/

/*
Output:
Address of i = 0x7ff7bedc6b68 (hexadeximal- form) not relay on the value of address it change while running the program.
Value of i = 3
*/