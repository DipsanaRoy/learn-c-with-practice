// C3.3. Check if the entered number is 1, 2 or 3 by using if and else if clause/ladder.

#include <stdio.h>

int main()
{
    int number;
    printf("\nEnter any number: ");
    scanf("%d", &number);

    printf("Your number is "); 
    // Without {}, only 1 line runs after if / else if / else
    if (number == 1)
        puts("1");
    else if (number == 2)
        puts("2");
    else if (number == 3)
        puts("3");
    else // Else is optional if required!
        puts("not 1, 2 or 3");

    return 0;
}