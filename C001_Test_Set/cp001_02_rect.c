// CP1.2. Calculate area of a rectangle by supplied variable by the user

#include<stdio.h>

int main()
{
    float length, breadth;

    printf("\nEnter length of the rectangle : ");
    scanf("%f", &length); // Takes float(%f) user input and store it to length

    printf("Enter breadth of the rectangle : ");
    scanf("%f", &breadth);

    printf("\nArea of the rectangle is %f\n", length * breadth);
    return 0;
}