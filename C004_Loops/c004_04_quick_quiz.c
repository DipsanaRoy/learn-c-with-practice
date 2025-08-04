// C4.4. Print n natural numbers in reverse order

#include <stdio.h>

int main()
{
    // Init: iterator & user entered number
    int i, n;

    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = n; i; i--)    // true until i = 0
            printf("%d\n", i); // Without {}, only 1 line runs after for/while
    }
    else
        puts("Please enter a natural number!");

    return 0;
}