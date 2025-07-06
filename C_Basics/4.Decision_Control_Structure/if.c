#include <stdio.h>

int main(){
  int age;
  printf("welcome to ARTO.\n Please enter your age:");
  scanf("%d", &age);
  
  if (age >= 18){
    printf("You are eligible for a license.\n");
  }

  if (NULL){ // NULL is the falsy value
    printf("This is never going to be printed");
  }
  
  printf("Your age is: %d.\n", age);
  return 0;
}