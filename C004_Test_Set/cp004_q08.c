// CP4.8. Calculate the factorial of a given number using a for loop

#include <stdio.h>

int main()
{
    // I/p: number & store factorial
    int num, fact = 1;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        puts("Factorial is not defined for negative numbers.");
        return 0;
    }

    for (int i = 2; i <= num; i++)
        fact *= i;

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}