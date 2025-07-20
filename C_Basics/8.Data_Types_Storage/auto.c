#include <stdio.h>
void function(){
  // An auto variable (through auto keyword is usually omitted)
  int autoVar = 10;
  printf("The value of autoVar is: %d\n", autoVar);
  // autoVar is destroyed here as it goes out of scope 

}

int main(){
  function(); // Calls function with auto variable 
  // function() has finished; autoVar is no longer accessible
  return 0;
}