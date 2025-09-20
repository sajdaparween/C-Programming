#include <stdio.h>

// Write your sumToN function here
int sumToN (int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumToN(n-1);
    }
}
// Don't change the main() function
int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d", sumToN(n));
    return 0;
}