#include <stdio.h>
#include <math.h>

int main() {
    float altitude, boiling_temp, fahrenheit, celsius;

    printf("Enter altitude in meters: ");
    scanf("%f", &altitude);

    boiling_temp = 100 - (altitude / 300);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Altitude-adjusted boiling temperature of water: %.2f C\n", boiling_temp);
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
