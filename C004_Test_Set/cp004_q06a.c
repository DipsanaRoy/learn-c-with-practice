// CP4.6a. Calculate sum of first n natural numbers using for loop

#include <stdio.h>

int main()
{
    // number, sum
    int n, sum = 0;
    
    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for(int i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("Sum of first %d natural numbers is %d\n", n, sum);
    }
    else puts("Please enter a natural number!");

    return 0;
}