// C7.5. Pass array to function

#include <stdio.h>

// Function Prototype
void printArray(int *ptr, int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printArray(arr, 7); // Function Call

    printf("\nNow, arr[2] = %d\n", arr[2]);

    return 0;
}

// Function Definition
void printArray(int *ptr, int n)
{
    putchar('\n');
    for (int i = 0; i < n; i++)
    {
        printf("Element %d | value: %d\n", i + 1, *(ptr + i)); // Want to know more? Read: C007_ARR_NOTES.md
    }
    ptr[2] = 999; // In main, arr[2] value will also change to 999
}