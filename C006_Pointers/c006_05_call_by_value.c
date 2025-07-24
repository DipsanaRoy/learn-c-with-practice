// C6.5. Call by value function

#include <stdio.h>

// Function Prototype
int sum(int a, int b);

int main()
{
    int a = 4, b = 7;
    printf("\na = %d and b = %d\n", a, b);

    printf("%d + %d is %d\n", a, b, sum(a, b)); // Function Call

    printf("After function call, a = %d and b = %d\n", a, b);

    return 0;
}

// Function Definition

// Call by value
int sum(int a, int b)
{
    int c = a + b;

    // a and b values will not change unless pointers are used
    a = 56465;
    b = 6546;

    return c;
}