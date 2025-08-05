// C11.7. Use realloc to increase and decrease an array's length. If space is insufficient, memory allocation fails and a null pointer is returned.

#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void memFail(int *arr);
void inputArray(int *arr, size_t start, size_t end);
void displayArray(int *arr, size_t len);

int main()
{ 
    size_t len;
    printf("\nHow many integers you want to store?: ");
    scanf("%zu", &len);
    
    int *arr = (int *)malloc(len * sizeof(*arr)); // Why *arr? Read: C011_NOTES.md
    memFail(arr);

    printf("\nEnter %zu element%s one by one\n", len, (len > 1 ? "s" : ""));
    inputArray(arr, 0, len);

    puts("\nStored values:");
    displayArray(arr, len);

    size_t newLen;
    printf("\nHow many more integers you want to store?: ");
    scanf("%zu", &newLen);

    newLen += len;
    arr = realloc(arr, newLen * sizeof(*arr));
    memFail(arr);

    printf("\nEnter %zu more element%s one by one\n", newLen - len, (newLen - len > 1 ? "s" : ""));
    inputArray(arr, len, newLen);

    puts("\nStored values after increase:");
    displayArray(arr, newLen);

    size_t shrinkLen;
    printf("\nHow many elements do you want to remove?: ");
    scanf("%zu", &shrinkLen);

    newLen -= shrinkLen;
    arr = realloc(arr, newLen * sizeof(*arr));
    memFail(arr);

    puts("\nStored values after decrease:");
    displayArray(arr, newLen);

    free(arr);
    return 0;
}

// Function Definitions:
void memFail(int *arr)
{
    if (arr == NULL)
    {
        puts("\nMemory allocation failed! Exiting program...");
        exit(1);
    }
}

void inputArray(int *arr, size_t start, size_t end)
{
    for (size_t i = start; i < end; i++)
    {
        printf("Enter element |%3zu|: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        printf("Element |%3zu|: %d\n", i + 1, arr[i]);
    }
}