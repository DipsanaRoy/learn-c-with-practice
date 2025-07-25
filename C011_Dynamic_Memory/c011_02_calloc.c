// C11.2. Default initialization value of calloc is 0.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // I/p: user-defined size
    size_t size;
    printf("\nHow many floating numbers you want to store?: ");
    scanf("%zu", &size);

    float *ptr = (float *)calloc(size, sizeof(float)); // Allocate continuous space in heap for n blocks

    // O/p: 0
    puts("\nStored values:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%3d|: %f\n", i + 1, ptr[i]);
    }
    free(ptr); // free heap
    return 0;
}