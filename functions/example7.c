#include <stdio.h>

void printNumbers()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d", i);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    printNumbers();
    printNumbers();
    return 0;
}
