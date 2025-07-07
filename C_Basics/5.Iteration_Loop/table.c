#include <stdio.h>
int main(){
  int num;
  printf("Welcome to printing Tables.\n");
  printf("Please enter the number.");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", num, i, num * i);
  }
  return 0;
}

/*
For loop-
1. Standard loop for running code multiple times.
2. Generally preferred for counting iterations.
*/