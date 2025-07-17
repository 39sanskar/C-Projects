/*
Long:  %ld is use to print long  
1. Size: Larger than int, often 64-bits on 64-bit systems and 32-
bits on 32-bit systems.
2. Range: Can hold larger integer values, useful for extended
arithmetic precision.
3. Suffix: Denoted by an L or l suffix for long literals, e.g., 100L.
4. Types: Has a long long variant for even larger integers, at
least 64 bits.
5. Standard: Size guaranteed by the C standard to be at least 32 bits
*/

#include <stdio.h>

long factorial(int);

int main(){
  printf("factorial of 4: %ld\n", factorial(4));
  printf("factorial of 5: %ld\n", factorial(5));
  printf("factorial of 10: %ld\n", factorial(10));
  printf("factorial of 15: %ld\n", factorial(15));
  printf("factorial of 20: %ld\n", factorial(20));
  printf("factorial of 25: %ld\n", factorial(25)); // this factorial is out of the long range.
  return 0;
}

long factorial(int num){
  long result = 1;
  for (int i = 2; i <= num; i++) {
    result *= i;
  }
  return result;
}
