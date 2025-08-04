// C4.1. Print first n positive numbers using do while loop

#include <stdio.h>

int main()
{
    // Initialize: iterator & user entered number
    int i = 1, n;

    printf("\nEnter any number: ");
    scanf("%d", &n);

    // negative numbers auto-correct
    if (n < 0)
        n *= -1; // short hand operator, it means n = n * -1;

    // Loop runs at least once, then checks the condition: enter 0 to see
    do {
        printf("%d\n", i);
        i++;            // update
    } while (i <= n);   // condition

    return 0;
}