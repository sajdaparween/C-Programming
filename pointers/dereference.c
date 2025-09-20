#include <stdio.h>
int main(int argc, char const *argv[])
{
    int value = 75;
    float price = 19.99;

    int *value_ptr;
    float *price_ptr;

    value_ptr = &value;
    price_ptr = &price;

    printf("Value through pointer: %d\n", *value_ptr);
    printf("Price through pointer: %.2f\n", *price_ptr);
    return 0;
}
