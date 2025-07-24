// CP5.2. Celsius to Fahrenheit conversion

#include <stdio.h>

// Function Prototype
float convert(float celsius);

int main()
{
    float celsius;
    printf("\nEnter the temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Temperature in Fahrenheit is %.2f F.\n", convert(celsius)); // Function Call
    return 0;
}

// Function Description
float convert(float celsius)
{
    return celsius * 1.8 + 32;
}