// CP7.3. Create a 10 integers array to store multiplication table of 5.

#include<stdio.h>

int main()
{
    // Init: 10 integer array
    int arr[10];

    puts("\nMultiplication table of 5:");
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
        printf("5 x %-2d = %d\n", i + 1, arr[i]);
    }
    return 0;
}