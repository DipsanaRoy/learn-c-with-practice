// CP5.4b. Print till the nth element of Fibonacci series with Negafibonacci support [extra]

#include <stdio.h>
#include <stdlib.h>

// Function Prototype
void printFibS(int n);

int main()
{
    int n; // nth element
    puts("\nHow many elements you want to print from the Fibonacci series?");
    scanf("%d", &n);

    if (n == 0)
    {
        puts("Please enter a non-zero value!");
    }
    else if (n == 1 || n == -1)
    {
        puts("First element of Fibonacci and Negafibonacci series is 0.");
    }
    else
    {
        printFibS(n);
    }
    return 0;
}

// Function Description
void printFibS(int n)
{
    printf("Printing %d elements of ", n);
    long long a = 0, b = 1, temp;
    if (n > 0)
    {
        puts("Fibonacci series\n0\n1");
        for (int i = 2; i < n; i++)
        {
            temp = a + b;
            a = b;
            b = temp;
            printf("%lld\n", b);
        }
    }
    else
    {
        puts("Negafibonacci series\n0\n-1");
        char sign = '-';
        for (int i = 2; i < abs(n); i++)
        {
            temp = a + b;
            a = b;
            b = temp;
            printf("%c%lld\n", (sign = sign ? '\0' : '-'), b);
        }
    }
}