#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a = 9;
    int b = 87;
    int c = sum(a,b);
    printf("The sum is %d\n", c);
    return 0;
}
