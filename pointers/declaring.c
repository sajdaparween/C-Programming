#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    char *ch_ptr;
    float *f_ptr;

    printf("Integer pointer: %p\n", &ptr);
    printf("Character pointer: %p\n", &ch_ptr);
    printf("Float pointer: %p\n", &f_ptr);
    return 0;
}
