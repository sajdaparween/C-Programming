#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, num3, smallest;

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    printf("Enter third number:");
    scanf("%d", &num3);

    //Assume num1 is smallest
    smallest = num1;

    if (num2 < smallest)
    {
        smallest = num2;
    }
    
if (num3 < smallest)
{
    smallest = num3;
}
printf("The smallest number is : %d\n", smallest);
    return 0;
}
