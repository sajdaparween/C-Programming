#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i = 1;
    //Input from user
    printf("Enter the values of n:");
    scanf("%d", &n);

    //do-while loop to print first n natural numbers
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <=n);
    
    return 0;
}
