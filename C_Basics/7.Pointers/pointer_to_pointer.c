/*
A pointer to a pointer is a type of pointer that stores the
address of another pointer, allowing indirect access to the
value of the variable the first pointer points to.
*/

#include <stdio.h>

int main() {
    int i = 3;      // Declares an integer variable i and assigns it the value 3
    // int *j = &i;      
    int *j;         // Declares a pointer j to an int. At this point, it is uninitialized.     
    j = &i;         // Assigns the address of i to j, i.e., j now points to i.    
    int **k;       // Declares a pointer to a pointer to an int (k).     
    k = &j;        // Assigns the address of j to k.
                   // So now, k points to j, which in turn points to i.     
    printf("Address of i = %p\n", &i);
    printf("Address of i = %p\n", j);     
    printf("Address of i = %p\n", *k);

    printf("Address of j = %p\n", &j);  
    printf("Address of j = %p\n", k);   

    printf("Address of k = %p\n", &k);  

    printf("Value of j = %p\n", j);      
    printf("Value of k = %p\n", k);      

    printf("Value of i = %d\n", i);      
    printf("Value of i = %d\n", *(&i));  
    printf("Value of i = %d\n", *j);     
    printf("value of i = %d\n", **k);    

    return 0;
}
/*

PRINT STATEMENTS EXPLAINED:

Print Address of i in 3 ways:
printf("Address of i = %p\n", &i);
Prints actual memory address of i.

printf("Address of i = %p\n", j);
Prints value stored in j, which is also the address of i, because j = &i.

printf("Address of i = %p\n", *k);
*k dereferences k to get j. So this also gives address of i.

Print Address of j in 2 ways:
printf("Address of j = %p\n", &j);
Prints actual memory address of j.

printf("Address of j = %p\n", k);
Since k = &j, this is also the address of j.

Print Address of k:
printf("Address of k = %p\n", &k);
Prints actual memory address of k.

Print Values Stored in j and k:

printf("Value of j = %p\n", j);
Value stored in j, which is the address of i.

printf("Value of k = %p\n", k);
Value stored in k, which is the address of j.

Print Value of i in 4 ways:
printf("Value of i = %d\n", i);
Direct value of i: prints 3.

printf("Value of i = %d\n", *(&i));
Takes address of i using &i, then dereferences it. Still gives 3.

printf("Value of i = %d\n", *j);
j points to i, so dereferencing j gives 3.

printf("value of i = %d\n", **k);
k → j → i. Dereferencing k twice gives 3.

*/