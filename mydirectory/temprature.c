#include <stdio.h>

int main()
{
    int choice;
    float temp;
    
    printf ("1. Celsius to fahrenheit\n");
    printf("2. fahrenheit to celsius\n");
    printf("Enter your choice(1 or 2): ");
    scanf("%d" , &choice);

    if (choice == 1)
    {
        printf("Enter temprature in Celsius: ");
        scanf ("%f" ,&temp);
        printf("Temprature in Fahrenheit: %.2f\n" , (temp * 9/5)+32);  
    }
    else if (choice == 2)
    {
        printf("Enter temprature in Fahrenheit: ");
        scanf("%f", &temp);
         printf("Temprature in celsius: %.2f\n" , (temp - 32) * 5/9);
    }
    
    else
    {
        printf("Invalid choice.\n");
    }
    




    return 0;
}
