// CP11.1+2+3. Dynamically create an array capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Init: 6 size array
    int *arr = (int *) calloc(6, sizeof(*arr));

    puts("\nStart entering 6 integers one by one");
    for (int i = 0; i < 6; i++)
    {
        printf("Enter int |%d|: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    puts("\nStored integers:");
    for (int i = 0; i < 6; i++)
    {
        printf("Int |%d|: %d\n", i + 1, arr[i]);
    }
    free(arr);
    return 0;
}