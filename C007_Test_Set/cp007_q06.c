// CP7.6. Functions that counts positive integers in an array.

#include <stdio.h>

// Updated prototype
int positive(int *arr, size_t length);

int main()
{
    int arr[] = {-1, 2, 3, 4, 5, -6, 7, -8}; // create array

    size_t length = sizeof(arr) / sizeof(arr[0]), // arr length
          posInts = positive(arr, length);        // no. of positive int in arr

    printf("\nThere %s %zu positive int in the array!", posInts == 1 ? "is" : "are", posInts); // O/p
    return 0;
}

// Function Definition
int positive(int *arr, size_t length)
{
    size_t i, pos = 0;
    for (i = 0; i < length; i++)
    {
        if (arr[i] > 0) pos++;
    }
    return pos;
}