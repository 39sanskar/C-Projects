/*
\t  => Insert a tab in the text at this point
\b => Insert a backspace in the text at this point
\n => Insert a newline in the text at this point
\' => Insert a single quote character in the text at this point
\" => Insert a double quote character in the text at this point.
\\ => Insert a backslash character in the text at this point 
*/

#include <stdio.h>

int main(){
  printf("Sanskar\nMishra\n");
  printf("Sanskar\tMishra\n");
  printf("Sanskar\bMishra\n"); // it consume r (which is present in the last)
  printf("Sanskar\"Mishra\"");
}
