// CP2. Check whether a number is divisible by 97 or not

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter any number: ");
    scanf("%d", &num);

    (num % 97 == 0) ? printf("\n%d is", num) : printf("\n%d is not", num);

    // 💡 Use puts for static `String output`
    puts(" divisible by 97"); // By default: adds a new line at the end.

    printf("\nDivisibility test returns: %d\n", num % 97); // 0 means yes
    return 0;
}