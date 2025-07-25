// CP7.9. Create a 3-d array and print the address of its elements in increasing order

#include <stdio.h>
#include <stdint.h>

int main()
{
    // Init:
    // i, j & k for iteration
    // arr as a 3-d array
    int i, j, k, arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };


    // Output
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            putchar('\n');
            for (k = 0; k < 4; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, (uintptr_t)&arr[i][j][k]);
            }
        }
        
    }
    return 0;
}