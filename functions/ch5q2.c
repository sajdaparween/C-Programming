#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float celsius, fahrenheit;

    // Input Celsius temperature
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Call the function
    fahrenheit = celsiusToFahrenheit(celsius);

    // Display result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
