// CP3.4. Find if a year is a leap year

#include <stdio.h>

int main()
{
    int year;

    printf("\nEnter any year: ");
    scanf("%d", &year);

    printf("%d is ", year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        puts("a leap year!");
    else
        puts("not a leap year!");

    return 0;
}