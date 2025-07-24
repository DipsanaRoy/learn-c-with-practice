// CP4.9. Calculate the factorial of a given number using a do while loop

#include <stdio.h>

int main()
{
    // iterator, store number & factorial
    int i = 2, num, fact = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    do
    {
        fact *= i;
    } while (i <= num);

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}