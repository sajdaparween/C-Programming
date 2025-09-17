#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    // Taking radius input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating the area
    area = PI * radius * radius;

    // Displaying the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
