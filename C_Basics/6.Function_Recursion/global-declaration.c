#include <stdio.h>
/*
void count_to_100();  
void sum(int, int);  
int addition;  // global call 
int main(){
  count_to_100(); 
  sum(4, 5); 
  printf("the sum is: %d\n", addition);
  return 0;
}

void count_to_100(){ 
  for (int i = 1; i<100; i++) {
    printf("%d\n", i);
  }
}

void sum(int first, int second) {  
  addition = first + second;
}
*/



// Avoiding Function Prototype 
void count_to_100(){ 
  for (int i = 1; i<100; i++) {
    printf("%d\n", i);
  }
}
int sum(int first, int second) {  
  int addition = first + second;
  return addition;
}
int main(){
  count_to_100(); 
  int add = sum(4, 5); 
  printf("the sum is: %d\n", add);
  return 0;
}
