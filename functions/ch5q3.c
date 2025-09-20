#include <stdio.h>

// Function to calculate force exerted by Earth on a body of mass m
float calculateForce(float mass) {
    const float g = 9.8; // acceleration due to gravity (m/s^2)
    return mass * g;
}

int main() {
    float mass, force;

    // Input mass
    printf("Enter mass of the body (in kg): ");
    scanf("%f", &mass);

    // Call function
    force = calculateForce(mass);

    // Display result
    printf("Force of attraction on a body of mass %.2f kg = %.2f N\n", mass, force);

    return 0;
}
