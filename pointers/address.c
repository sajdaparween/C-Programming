#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 42;
    char letter = 'X';

    int *num_ptr;
    char *char_ptr;

    num_ptr = &number;
    char_ptr = &letter;

    printf("Address of number: %p\n", num_ptr);
    printf("Address of letter: %p\n", char_ptr);
    return 0;
}
