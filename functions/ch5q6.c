#include <stdio.h>

// Function to print the pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;  // odd numbers: 1, 3, 5, ...
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input number of lines
    printf("Enter number of lines: ");
    scanf("%d", &n);

    // Call function
    printPattern(n);

    return 0;
}
