#include <stdio.h>

int main()
{
    float Principal, Rate, Time, Simple_Interest;

printf("Enter the Principal Amount:");
scanf("%f",&Principal);

printf("Enter the number of years:");
scanf("%f", &Time);

printf("Enter the rate of interest:");
scanf("%f", &Rate);

Simple_Interest = (Principal * Rate * Time) / 100;

printf("Simple Interest = %.2f\n",Simple_Interest );
    return 0;
}
