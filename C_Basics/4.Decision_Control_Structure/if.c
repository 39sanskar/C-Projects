#include <stdio.h>

int main(){
  int age;
  printf("welcome to ARTO.\n Please enter your age:");
  scanf("%d", &age);
  
  if (age >= 18){
    printf("You are eligible for a license.\n");
  }
  printf("Your age is: %d.\n", age);
  return 0;
}