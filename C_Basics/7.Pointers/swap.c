// Call by reference

/*

1. Direct Access: Call by reference passes the address of variables, 
allowing functions to modify the actual values.
2. Pointers in C: Implemented using pointers that point to the original data.
3.  Efficiency: Avoids copying large data structures, saving memory and time.
4. Multiple Returns: Can return multiple values from a function via out-parameters.
5. Risk: Increases the potential for unintended side effects if not used carefully.

*/

#include <stdio.h>

void swap(int*, int*); 
/*
 Declares a function that takes two pointers to int (i.e., addresses of integers) as parameters.
This allows the function to modify the original integer variables by accessing their memory addresses.

Function declaration (or prototype).
It says: "swap is a function that takes two int pointers and returns nothing (void)".
*/

int main(){
  int x = 4;
  int y = 87;
  
  printf("Value of x = %d, Value of y = %d\n", x, y);
  swap(&x, &y); // passes the address of x and y.
  /*
  Calls the swap function.
  &x and &y are the addresses of x and y.
  You're passing the addresses, so the function can modify the actual variables in memory.
  */
  
  printf("Value of x = %d, Value of y = %d\n", x, y);
  return 0;
}

void swap(int* ptr1, int* ptr2){
  /*
  This function receives two pointers: ptr1 and ptr2.
  ptr1 points to x, ptr2 points to y.
  ptr1 = &x(address)  →  *ptr1 = x(value)
  ptr2 = &y(address)  →  *ptr2 = y(value)

  */
  printf("Value of ptr1 = %d, Value of ptr2 = %d\n", *ptr1, *ptr2);
  int temp = *ptr1;   // temp = x = 4
  *ptr1 = *ptr2;      // x = y → x = 87
  *ptr2 = temp;       // y = temp → y = 4

  printf("Value of ptr1 = %d, Value of ptr2 = %d\n",
  *ptr1, *ptr2);
}

/*

| Concept           | Explanation                                                          |
| ----------------- | -------------------------------------------------------------------- |
|  int*             | Pointer to an integer. Holds address of an `int`.                    |
|  *ptr             | Dereferencing. Accesses the value at the memory address.             |
|  &x               | Address-of operator. Gets the memory location of `x`.                |
| Call by Reference | Passing pointers allows the function to modify the actual variables. |

*/

/*
Output:
Value of x = 4, Value of y = 87
Value of ptr1 = 4, Value of ptr2 = 87
Value of ptr1 = 87, Value of ptr2 = 4
Value of x = 87, Value of y = 4
*/