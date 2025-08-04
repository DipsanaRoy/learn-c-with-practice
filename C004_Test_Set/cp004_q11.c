// CP4.11. Another method to check for prime number

#include <stdio.h>
#include <math.h>

int main()
{
    int num, isPrime = 1; // stores number, 1 = prime, 0 = not prime

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 3)
        isPrime = num == 2;

    // Check for even number
    else if (num % 2 == 0)
        isPrime = 0;

    else
    {
        int limit = (int)sqrt(num); // Cast sqrt(num) to int

        // Prime no. check with odd nos.
        for (int i = 3; i <= limit; i += 2)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    printf("%d is %sa prime number\n", num, isPrime ? "" : "not ");
    return 0;
}