#include <stdio.h>
void starPattern(int rows) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}

void ReversedStarPattern(int rows) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}
int main() {
    int rows, type;

    printf("Enter 0 for the star pattern and 1 for the reversed star pattern: \n");
    scanf("%d", &type);
    printf("How many star pattern you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;
        
        case 1:
             ReversedStarPattern(rows);
             break;
    
    default:
           printf("Invalid Choice!");
        break;
    }

    return 0;
}