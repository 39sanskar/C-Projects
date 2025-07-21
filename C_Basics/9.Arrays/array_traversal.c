/*
1. Orderly Visit: Go through elements from start to end.
2. Loops: Use for or while for access.
3. Indexes: Start at 0, end at size - 1.
4. Modify or Read: Perform operations on elements.
5. Pointer Option: Increment pointers to navigate.
*/

#include <stdio.h>
int main(){
  int arr_size = 10;
  int marks[10];

  for(int i = 0; i < arr_size; i++){
    printf("Please enter marks for Students %d: ", (i + 1));
    scanf(" %d", &marks[i]);
  }

  for (int i = 0; i < arr_size; i++){
    printf("Marks of Student %d are: %d\n", (i + 1), marks[i]);
  }
  return 0;

}