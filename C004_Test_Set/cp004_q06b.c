// CP4.6b. Calculate sum of first n natural numbers using do while loop

#include <stdio.h>

int main()
{
    // iterator, number, sum
    int i = 1, n, sum = 0;
    
    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        do
        {
            sum += i;
            i++;
        } while(i <= n);
        printf("Sum of first %d natural numbers is %d\n", n, sum);
    }
    else puts("Please enter a natural number!");
    
    return 0;
}