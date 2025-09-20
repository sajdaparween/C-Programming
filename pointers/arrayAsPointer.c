#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[4] = {10, 20, 30, 40};
    int *ptr;

    ptr = numbers;

    printf("Array name address: %p\n", (void*)numbers);
    printf("First element address: %p\n", (void*)&numbers[0]);
    printf("Pointer address: %p\n", (void*)ptr);
    printf("Value via array name: %d\n", *numbers);
    printf("Value via pointer: %d\n", *ptr);
    return 0;
}
