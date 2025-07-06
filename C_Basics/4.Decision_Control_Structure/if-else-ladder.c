#include <stdio.h>
int main(){
  int age;
  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);

  if (age < 18){
    printf("You are too young, please apply after you are 18");
  } else if(age > 70){
    printf("You are senior, You can not apply anymore\n");
  } else {
    printf("You are eligible for a liccense.\n");
  }
  printf("Your age is: %d\n", age);
  return 0;
}

// if any-one condition is true then remaining condition is skip (it execute top to bottom)
// Once a true condition's code block is executed, it exists the ladder and skips the remaining conditions.
