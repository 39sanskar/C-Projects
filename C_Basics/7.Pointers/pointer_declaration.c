#include <stdio.h>
int main() {
  int i = 3;     // Declare an integer 'i' and initialize it to 3
  int *j = &i;   // Declare a pointer to int named 'j' and assign it the address of 'i'
  /*
  Both are same things.
  int *j = &i;
      Or 
  int *j;
  j = &i;    
  */
  printf("Address of i = %p\n", &i);
  printf("Address of i = %p\n", j);
  printf("Address of j = %p\n", &j); //  &j is the address of the pointer variable j itself.
  printf("Value of j = %p\n", j);
  printf("Value of i = %d\n", i);
  printf("Value of i = %d\n", *(&i));
  printf("Value of i = %d\n", *j); // j points to i, so *j gets the value stored at the address j holds → which is the value of i. 
  return 0;
}

/*
✅ printf("Address of i = %p\n", &i);
&i is the memory address of the variable i.
This prints the location in memory where i is stored.
🧠 Output example: Address of i = 0x7ffee9f5b67c

✅ printf("Address of i = %p\n", j);
j stores the address of i, i.e., j == &i.
So this prints the same address as the line above.
🧠 Output: Same as previous line.

✅ printf("Address of j = %p\n", &j);
&j is the address of the pointer variable j itself.
This is a different memory location than i.
🧠 Output example: Address of j = 0x7ffee9f5b670

✅ printf("Value of j = %p\n", j);
Again, j stores the address of i, so this is the same as printing &i.
🧠 Output: Same as line 1 and 2.

✅ printf("Value of i = %d\n", i);
Prints the value of i, which is simply 3.
🧠 Output: Value of i = 3

✅ printf("Value of i = %d\n", *(&i));
&i gets the address of i.
*(&i) dereferences it, giving the value stored at that address, which is again 3.
🧠 Output: Value of i = 3

✅ printf("Value of i = %d\n", *j);
j points to i, so *j gets the value stored at the address j holds → which is the value of i.
🧠 Output: Value of i = 3

Summary:

| Expression      | Meaning                        | Output Example               |
| --------------- | ------------------------------ | ---------------------------- |
| `&i`            | Address of `i`                 | `0x7ffee9f5b67c`             |
| `j`             | Holds the address of `i`       | `0x7ffee9f5b67c`             |
| `&j`            | Address of pointer `j`         | `0x7ffee9f5b670` (different) |
| `*j` or `*(&i)` | Value stored at address of `i` | `3`                          |
| `i`             | The integer value              | `3`                          |

*/
