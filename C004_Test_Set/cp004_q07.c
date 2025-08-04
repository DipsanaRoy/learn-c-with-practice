// CP4.7. C Program to the sum of numbers occurring in the multiplication table of n

#include <stdio.h>

int main()
{
    // number, sum
    int n, sum = 0;

    printf("\nEnter any number of your choice: ");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
        sum += n * i;

    printf("Sum of numbers occurring in %d's table is %d\n", n, sum);
    return 0;
}