#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks
    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);

    // Check if marks are within valid range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; // Exit the program with error
    }

    // Determine grade based on marks
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output the grade
    printf("The grade is: %c\n", grade);

    return 0;
}
