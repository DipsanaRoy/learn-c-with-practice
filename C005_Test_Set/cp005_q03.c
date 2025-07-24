// CP5.3. Calculate force of attraction on a body of mass m exerted by earth

#include <stdio.h>

// Function Prototype
float calculate(float mass);

int main()
{
    float mass;
    printf("\nEnter body mass in kg: ");
    scanf("%f", &mass);

    printf("Force of attraction on the body by earth is %f N.\n", calculate(mass)); // Function Call
    return 0;
}

// Function Description
float calculate(float mass)
{
    return mass * 9.8;
}