#include <stdio.h>
int main(){
  int age;
  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);

  if (age >= 18){
    printf("You are eligible for a lisense.\n");
  } else {
    printf("You are too Young, Please apply after you are 18.");
  }
  printf("Your age is: %d\n", age);
  return 0;
}
