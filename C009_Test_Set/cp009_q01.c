// CP9.1. Create a two dimensional vector using structures

#include<stdio.h>

// 2d Structure
typedef struct vector2d {
    float x; // X dimension
    float y; // Y dimension
} vect2d;

int main()
{
    // Init: v1 from vect2d
    vect2d v1;

    // set v1 values
    v1.x = 234.4;
    v1.y = 232.45;
    printf("\nVector 1: (%.3f, %.3f)\n", v1.x, v1.y);
    return 0;
}