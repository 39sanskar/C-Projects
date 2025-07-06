#include <stdio.h>
int main(){
  int a, b;
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);

  if (!(a > 0 && b > 0)) {
    printf("Both values are greater than 0\n");
  } else {
    printf("Both values are less than 0\n");
  }
  return 0;
}