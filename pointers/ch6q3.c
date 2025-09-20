#include <stdio.h>

// Function to multiply value by 10 (pass by reference using pointer)
void makeTenTimes(int *x) {
    *x = (*x) * 10;  // Dereference pointer and modify the value
}

int main() {
    int num = 5;

    printf("Original value of num: %d\n", num);

    makeTenTimes(&num);  // Pass address of num

    printf("Value of num after function call: %d\n", num);

    return 0;
}

