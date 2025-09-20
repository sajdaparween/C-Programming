#include <stdio.h>

void display(int x) {
    printf("Address of i inside function: %p\n", &x);
}

int main() {
    int i = 10;

    printf("Address of i in main: %p\n", &i);

    display(i);

    return 0;
}

