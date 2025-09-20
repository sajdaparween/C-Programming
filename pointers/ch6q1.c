#include <stdio.h>

int main() {
    int num = 42;       // A variable
    int *ptr;           // A pointer to int

    ptr = &num;         // Store address of num in pointer

    // Print address of the variable
    printf("Address of num: %p\n", &num);

    // Print value using pointer dereferencing
    printf("Value of num using pointer: %d\n", *ptr);

    return 0;
}
