#include <stdio.h>
int main(int argc, char const *argv[])
{
    int scores[8] = {45, 78, 92, 63, 87, 34, 91, 56};

    int *start_ptr = scores;
    int *end_ptr = scores + 7;
    int *current_ptr = scores;

    while (current_ptr <= end_ptr)  
    {
        if (*current_ptr >= 60 && *current_ptr <= 90)
        {
            printf("Value %d in range\n", *current_ptr);
        } else
        {
            printf("Value %d out of range\n", *current_ptr);
        }
        current_ptr++;
        
    }
    if (current_ptr >end_ptr)
    {
        printf("Traversal complete");
    }
    
    
    return 0;
}
