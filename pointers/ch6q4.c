#include <stdio.h>

// Function to calculate sum and average using pointers
void calculate(int a, int b, int *sum, float *avg) {
    *sum = a + b;              // Store sum at the address of sum
    *avg = (float)(*sum) / 2;  // Store average at the address of avg
}

int main() {
    int num1 = 20, num2 = 10;
    int sum;
    float avg;

    // Call function with addresses of sum and avg
    calculate(num1, num2, &sum, &avg);

    // Print results
    printf("Sum of %d and %d = %d\n", num1, num2, sum);
    printf("Average of %d and %d = %.2f\n", num1, num2, avg);

    return 0;
}
