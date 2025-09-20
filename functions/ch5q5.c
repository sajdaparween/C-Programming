#include <stdio.h>

int main() {
    int a = 2;

    // Well-defined way: separate the evaluations
    printf("%d ", a);     // prints 2
    printf("%d ", ++a);   // increments first, then prints 3
    printf("%d\n", a++);  // prints 3, then increments to 4

    // Final value of a
    printf("Final value of a = %d\n", a); // prints 4

    return 0;
}
