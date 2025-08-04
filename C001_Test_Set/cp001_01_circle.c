// CP1.1. Calculate area of circle and cylinder

#include <stdio.h>
#include <math.h> // M_PI: to get accurate PI value

int main()
{
    float radius, height;
    printf("\nEnter the radius of a circle: ");
    scanf("%f", &radius);

    printf("\nArea of the Circle is %f\n", M_PI * radius * radius);

    printf("\nEnter the radius of a cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of a cylinder: ");
    scanf("%f", &height);

    printf("\nArea of the cylinder is %f\n", 2 * M_PI * radius * (radius + height));
    return 0;
}