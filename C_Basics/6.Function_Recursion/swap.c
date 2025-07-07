/*
Call by value => pass the argument copy not the original, and also have seperate memory. 

1. Value Copy: Passes argument's copy, not the original.
2. Separate Memory: Parameters use distinct memory locations.
3. Data Safety: Original data remains unchanged by the function.
4. Direct Modification: Cannot modify original arguments directly.
5. Efficiency: Good for small data types, less so for large structures.
6. Ease of Use: Straightforward and safe for functions not altering inputs.
*/

#include <stdio.h>

void swap(int, int);
int main(){
  int x = 4;
  int y = 7;
  printf("\nx: %d, y: %d", x, y);
  swap(x, y);
  printf("\nx: %d, y: %d\n", x, y);
  return 0;
}

void swap(int first, int second){
  printf("\nfirst: %d, second: %d", first, second); //before swapping
  int temp = first;
  first  = second;
  second = temp;
  printf("\nfirst: %d, second: %d", first, second); // after swapping
  
}

// x, y are not exactly pass basically its copy is passing.
  