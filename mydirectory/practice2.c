#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    if (number %97 == 0)    
    {
        printf("%d is divisible by 97.\n");
    }
    else
    {
        printf("%d is not divible by 97.\n");
    }
    
    
    return 0;
}
