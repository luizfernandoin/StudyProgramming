#include <stdio.h>
#include <math.h>

void main() {
    double temp_celsius;

    printf("Temperatura em Celsius: ");
    scanf("%lf", &temp_celsius);

    double temp_fahrenheit = ((temp_celsius * 9/5) + 32);
    double temp_kelvin = (temp_celsius + 273.15);

    printf("Celsius: %.0f �C\nFahrenheit: %.0f �F\nKelvin: %.0f �K\n", temp_celsius, temp_fahrenheit, temp_kelvin);
}
