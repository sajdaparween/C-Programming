#include <stdio.h>
int main()
{
    int n;

    //Input from user
    printf("Enter the value of n:");
    scanf("%d\n", &n);

    //for loop to print first n natural number
    for (int i = n;  i >=3 ; i--){
     printf("%d\n", i);
    }
    
    return 0;
}
