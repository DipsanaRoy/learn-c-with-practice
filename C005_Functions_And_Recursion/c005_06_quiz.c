// C5.6. Calculate area of a square by using function

#include<stdio.h>

// Function Prototype
float area (float a);

int main()
{
    float side; // length of square's side

    printf("\nEnter the length of a square's side: ");
    scanf("%f", &side);

    printf("Area of the square is %f\n", area (side)); // Function Call + Output

    return 0;
}

// Function Description
float area (float a)
{
    return a * a;
}