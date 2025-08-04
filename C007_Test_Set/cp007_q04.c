// CP7.4. Create an array of 10 integers to store multiplication table of user supplied number.

#include<stdio.h>

int main()
{
    // Init:
    // arr stores multiplication table
    // n for user-defined number
    int arr[10], n;

    printf("\nEnter a number whose multiplication table you want to store: ");
    scanf("%d", &n);

    printf("\nMultiplication table of %d:\n", n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
        printf("%d x %-2d = %d\n", n, i + 1, arr[i]);
    }
    return 0;
}