// CP4.5. Calculate sum of first n natural numbers using while loop

#include <stdio.h>

int main()
{
    // iterator, number, sum
    int i = 1, n, sum = 0;
    
    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        while(i <= n)
        {
            sum += i;
            i++;
        }
        printf("Sum of first %d natural numbers is %d\n", n, sum);
    }
    else puts("Please enter a natural number!");

    return 0;
}