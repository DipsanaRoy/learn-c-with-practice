// CP4.8. Calculate the factorial of a given number using a for loop

#include <stdio.h>

int main()
{
    // iterator, store number & factorial
    int i, num, fact = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++)
        fact *= i;

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}