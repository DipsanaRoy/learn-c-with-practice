// CP5.4c. Calculate the nth element of Fibonacci series [Recursion]

#include <stdio.h>

// Function Prototype
int calculate(int n);

int main()
{
    int n; // nth element
    printf("\nEnter the nth element: ");
    scanf("%d", &n);

    if (n == 0) 
    {
        puts("Please enter a non-zero value!");
        return 0;
    }

    printf("Element number %d of Fibonacci series is ", n);
    if (n > 2)
    {
        printf("%d", calculate(n - 1));
    }
    else if (n > 0)
    {
        printf("%d", n - 1);
    }
    else
    {
        printf("%s%d", (n < 0 && n % 2 == 0) ? "-" : "", calculate((n + 1) * -1));
    }
    puts(".");
    return 0;
}

// Function Description
int calculate(int n)
{
    if (n < 2) return n;

    return calculate(n - 1) + calculate(n - 2);
}