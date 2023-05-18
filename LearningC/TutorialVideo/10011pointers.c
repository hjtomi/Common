#include <stdio.h>

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    int age = 16;
    int *pAge = &age;

    // age -> value
    // &age -> memory address

    // pAge -> memory address (of given variable, array, etc...)
    // *pAge -> value (of given variable, array, etc...)

    return 0;
}
