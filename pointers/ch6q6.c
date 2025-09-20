#include <stdio.h>

// Function that tries to change value (call by value)
void makeTenTimes(int x) {
    x = x * 10;  // Only changes local copy
    printf("Value inside function: %d\n", x);
}

int main() {
    int num = 5;

    printf("Original value of num (before function call): %d\n", num);

    makeTenTimes(num);  // Passing by value

    printf("Value of num after function call: %d\n", num);

    return 0;
}
