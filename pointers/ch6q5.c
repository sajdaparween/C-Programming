#include <stdio.h>

int main() {
    int i = 50;         // Normal variable
    int *ptr;           // Pointer to int
    int **pptr;         // Pointer to pointer to int

    ptr = &i;           // ptr stores address of i
    pptr = &ptr;        // pptr stores address of ptr

    // Printing the value of i in different ways
    printf("Value of i directly       : %d\n", i);
    printf("Value of i using *ptr     : %d\n", *ptr);
    printf("Value of i using **pptr   : %d\n", **pptr);

    return 0;
}
