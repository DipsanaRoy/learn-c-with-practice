// CP5.4a. Calculate the nth element of Fibonacci series [iterative]. I also added Negafibonacci support.

#include <stdio.h>
#include <stdlib.h>

// Function Prototype
long long calculate(int n);

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

    printf("Element number %d of %sibonacci series is ", n, n > 0 ? "F" : "Negaf");
    if (n == 1 || n == -1)
    {
        putchar('0');
    }
    else
    {
        printf("%s%lld", (n < 0 && n % 2 == 0) ? "-" : "", calculate(abs(n)));
    }
    puts(".");
    return 0;
}

// Function Description
long long calculate(int n)
{
    long long a = 0, b = 1, temp;
    for (int i = 2; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}