// C4.2. Print natural numbers from 10 to 20 when initial loop counter 'i' is initialized to 0

#include <stdio.h>

int main()
{
    int i = 0;     // iterator
    while (i < 11) // condition
    {
        printf("%d\n", i + 10);
        i++; // update
    }
    return 0;
}