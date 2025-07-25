// CP9. Write a function sumVector which returns the sum of two 2-d vectors passed to it.
#include <stdio.h>

// Structure data types
typedef struct vector2d
{
    float x; // X dimension
    float y; // Y dimension
} vect2d;

// Function Prototype
vect2d sumVector(vect2d v, vect2d u);

int main()
{
    // Init: v, u from vect2d
    vect2d v, u;

    // I/p: Vector v
    printf("\nEnter x dimension of |Vector 1|: ");
    scanf("%f", &v.x);
    printf("Enter y dimension of |Vector 1|: ");
    scanf("%f", &v.y);

    // I/p: Vector u
    printf("\nEnter x dimension of |Vector 2|: ");
    scanf("%f", &u.x);
    printf("Enter y dimension of |Vector 2|: ");
    scanf("%f", &u.y);

    // O/p
    vect2d sum = sumVector(u, v); // Function Call
    printf("\nVector 1: (%.3f, %.3f)", v.x, v.y);
    printf("\nVector 2: (%.3f, %.3f)\n", u.x, u.y);
    printf("\nSum of |Vector 1| and |Vector 2|: (%.3f, %.3f)\n", sum.x, sum.y);
    return 0;
}

// Function Definition
vect2d sumVector(vect2d v, vect2d u)
{
    vect2d sum;
    sum.x = v.x + u.x;
    sum.y = v.y + u.y;
    return sum;
}