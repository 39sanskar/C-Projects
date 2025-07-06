#include <stdio.h>
int main(){
  int a = -1, b = 20;
  if (a > 0 || b > 0){
    printf("Any one of the given value is greater than 0\n");
  } else {
    printf("Both values are less than 0\n");
  }
  return 0;
}