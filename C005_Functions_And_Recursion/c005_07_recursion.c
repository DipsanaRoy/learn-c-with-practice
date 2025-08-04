// C5.7. Calculate factorial

#include <stdio.h>

// see: C005_NOTES.md
int factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n < 2) return 1;
    
    // Recursive case: factorial of n is n multiplied by factorial(n - 1) till base case is reached
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("\nEnter a non-negative integer: ");
    scanf("%d", &num);
    
    if(num > 1)
    {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    else puts("Please enter a non-negative integer!");

    return 0;
}
