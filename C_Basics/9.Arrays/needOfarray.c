/*
1. An Array is just a list of values.
2. Index: Starts with 0.
3. Arrays are used for storing multiple values in a single variable.
*/

#include <stdio.h>
int main(){
  int marks1, marks2, marks3, marks4, marks5;
  printf("Please enter marks for Student 1:");
  scanf(" %d", &marks1);
  printf("Please enter marks for Student 2:");
  scanf(" %d", &marks2);
  printf("Please enter marks for Student 3:");
  scanf(" %d", &marks3);
  printf("Please enter marks for Student 4:");
  scanf(" %d", &marks4);
  printf("Please enter marks for Student 5:");
  scanf(" %d", &marks5);

  printf("Marks of student 1 are: %d\n", marks1);
  printf("Marks of student 2 are: %d\n", marks2);
  printf("Marks of student 3 are: %d\n", marks3);
  printf("Marks of student 4 are: %d\n", marks4);
  printf("Marks of student 5 are: %d\n", marks5);
  return 0;

}
