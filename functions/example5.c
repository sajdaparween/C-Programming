#include <stdio.h>
int calculateArea(int length, int width)
{
    return (length * width);
} 
int main(int argc, char const *argv[])
{
    int length, width;
    scanf("%d", &length);
    scanf("%d", &width);

    int Area = calculateArea(length, width);
    printf("Area : %d", Area);
    return 0;
}
