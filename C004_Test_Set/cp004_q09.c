// CP4.9. Calculate the factorial of a given number using a do while loop

#include <stdio.h>

int main()
{
    // I/p: number, Store: iterator & factorial
    int num, i = 1, fact = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        puts("Factorial is not defined for negative numbers.");
        return 0;
    }

    do
    {
        fact *= i++;
    } while (i <= num);

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}