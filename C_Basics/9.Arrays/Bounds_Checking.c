/*
1. C Doesn't Auto-check: No automatic bounds verification on arrays.
2. Programmer's Duty: Ensure indices are within array limits.
3. Risks: Out-of-bounds access can lead to crashes or security risks.
4. Validate Indices: Always check indices against array size.
*/

#include <stdio.h>
int main(){
  int num[40];
  for (int i = 0; i < 100; i++){
    num[i] = i;
  }
  return 0;
}

/*
Output: it show error.
[1]    5531 abort      ./Bounds_Checking
*/