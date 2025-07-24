// CP5.4. Calculate the nth element of Fibonacci series [Recursion]

#include <stdio.h>

// Function Prototype
int calculate(int n);

int main()
{
    int n; // nth element
    printf("\nEnter the nth element: ");
    scanf("%d", &n);

    if (n == 0) puts("Please enter a non-zero value!");

    printf("Element number %d of Fibonacci series is ", n);
    printf("%d");
    if (n > 2)
    {
        printf(calculate(n - 1));
    }
    else if (n > 0)
    {
        printf(n - 1);
    }
    else
    {
        printf((-1 * calculate((n + 1) * -1)));
    }
    return 0;
}

// Function Description
int calculate(int n)
{
    if (n < 2) return n;

    return calculate(n - 1) + calculate(n - 2);
}