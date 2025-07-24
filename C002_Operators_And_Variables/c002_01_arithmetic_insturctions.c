// C2.1. Arithmetic Operations

#include <stdio.h>

int main()
{
    float a = 100, b = 10, z;

    // Basic arithmetic operations
    printf("The value of a + b = %f\n", a + b); // Addition
    printf("The value of a - b = %f\n", a - b); // Subtraction
    printf("The value of a * b = %f\n", a * b); // Multiplication
    printf("The value of a / b = %f\n", a / b); // Division

    // Uninitialized variable (may print garbage)
    printf("The value of z = %f\n", z);

    // Modulus operator examples
    printf("5 when divided by 2 leaves the remainder of %d\n", 5 % 2); // 1
    printf("-5 %% 2 = %d\n", -5 % 2);                                  // -1
    printf("5 %% -2 = %d\n", 5 % -2);                                  // 1 or -1 (depends on compiler)

    return 0;
}