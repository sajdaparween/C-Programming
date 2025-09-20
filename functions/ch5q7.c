#include <stdio.h>

// Recursive function to calculate sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;   // base case
    else
        return n + sumOfNaturalNumbers(n - 1); // recursive step
}

int main() {
    int n, result;

    // Input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Call recursive function
    result = sumOfNaturalNumbers(n);

    // Output
    printf("Sum of first %d natural numbers = %d\n", n, result);

    return 0;
}
