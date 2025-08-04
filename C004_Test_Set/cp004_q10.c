// CP4.10. Check if a number is prime

#include <stdio.h>
#include <math.h>

int main()
{
    int num, isPrime = 1; // Init: number, 1 = prime, 0 = not prime

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        isPrime = 0;
    }
    else
    {
        int sqrtNum = (int)sqrt(num); // Cast sqrt(num) to int
        for (int i = 2; i <= sqrtNum; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    printf("%d is %sa prime number.\n", num, isPrime ? "" : "not ");
    return 0;
}