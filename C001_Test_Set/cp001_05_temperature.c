// CP1.5. Convert temperature from Celsius to Fahrenheit and vice versa

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("\nEnter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32.0;

    printf("\nTemperature in Fahrenheit is %f\n", fahrenheit);

    printf("\nEnter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5 * fahrenheit - 160.0) / 9.0;

    printf("\nTemperature in Celsius is %f\n", celsius);
    return 0;
}