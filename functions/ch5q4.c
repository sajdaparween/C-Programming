#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;   // base case
    else if (n == 1)
        return 1;   // base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main() {
    int n;

    // Input
    printf("Enter the position (n) to find nth Fibonacci number: ");
    scanf("%d", &n);

    // Calculate and display result
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
