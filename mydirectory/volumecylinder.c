#include <stdio.h>
#define PI 3.14159

int main() {
     float radius, height, volume;
    
     printf("Enter the radius of cylinder:");
     scanf("%f", &radius);

     printf("Enter the height of cylinder:");
     scanf("%f", &height);

     volume = PI * radius * radius * height;

     printf("The volume of cylinder is : %.2f\n", volume);

return 0;
}