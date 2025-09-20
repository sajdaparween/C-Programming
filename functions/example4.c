#include <stdio.h>
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main(int argc, char const *argv[])
{
    float fahrenheit;
    printf("Enter temprature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = fahrenheitToCelsius(fahrenheit);
    printf("Temperature in celsius is: %.1f", celsius);
    return 0;
}
