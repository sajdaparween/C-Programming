#include <stdio.h>

// Function to calculate average of three numbers
float findAverage(int a, int b, int c) {
    return (a + b + c) / 3.0;  // Use 3.0 to ensure float division
}

int main() {
    int num1, num2, num3;
    float avg;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call function to find average
    avg = findAverage(num1, num2, num3);

    // Display result
    printf("The average of %d, %d and %d is: %.2f\n", num1, num2, num3, avg);

    return 0;
}
