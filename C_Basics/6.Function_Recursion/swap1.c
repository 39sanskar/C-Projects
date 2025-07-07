#include <stdio.h>

// Function to try to swap two numbers
void trySwap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  printf("Inside trySwap - a: %d, b: %d\n", a, b);
}
int main(){
  int x = 10, y = 20;
  printf("Before tryswap - x: %d, y: %d\n", x, y);
  trySwap(x, y); // Attempting to swap x and y 
  // The original values are unchanged
  printf("After tryswap - x: %d, y: %d\n", x, y);
  return 0;
}

/*
Output:
Before tryswap - x: 10, y: 20
Inside trySwap - a: 20, b: 10
After tryswap - x: 10, y: 20
*/