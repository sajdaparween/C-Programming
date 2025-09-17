#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c", &ch);

    if (ch >= '0' && ch <='9')
    {
        printf("The character '%c' is digit.\n", ch);

    }
    else
    {
        printf("The character '%c' is NOT a digit.\n", ch);
    }
    
    return 0;
}
