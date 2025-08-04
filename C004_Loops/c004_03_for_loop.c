// C4.3. Print first n natural numbers using for loop

#include <stdio.h>

int main()
{
    // Init: iterator & user entered number
    int i, n;
    
    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        // for (iterator; condition; update)
        for(i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    else puts("Please enter a natural number!");
    
    return 0;
}