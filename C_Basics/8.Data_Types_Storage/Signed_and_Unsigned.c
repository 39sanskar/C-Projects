/*

1. Signed int: Can represent both positive and negative numbers, including zero.
2. Unsigned int: Can only represent non-negative numbers, doubling the maximum positive value compared to signed.
3. Range: Signed int range is roughly from -2^31 to 2^31-1, while unsigned is from 0 to 2^32-1 on a 32-bit system.
4. Overflow: Unsigned ints wrap around on overflow.
5. Usage: Choose unsigned for countable quantities where negative values don't make sense.

*/
#include <stdio.h>
int main(){
  unsigned int length = 10;   // Length of the rectangle (can't be negative)
  unsigned int width = 5;    // width of the rectangle (can't be negative)
  unsigned int area;       // Temperature (can be negative)
  int temperature = -15;

  // Calculate the area of the rectangle.
  area = length * width;
  printf("The area of the rectangle is: %u square units\n", area);
  printf("The current temperature is: %d degrees Celsius\n", temperature);
  return 0;
}