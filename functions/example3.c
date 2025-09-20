#include <stdio.h>
int takenumber()
{
    int i, product;
    printf("Enter a number:");
    scanf("%d", &i);
    
    product = i * i;
    printf("The square of number is %d\n", product);
    return i;

}
int main()
{
    int c;
    c = takenumber();
    return 0;
}
