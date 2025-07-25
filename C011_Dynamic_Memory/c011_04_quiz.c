// C11.4. Store 5 floating numbers by dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // I/p: user-defined size
    size_t size;
    printf("\nHow many floating numbers you want to store?: ");
    scanf("%zu", &size);
    
    // Init: Dynamic Array
    float *ptr = (float *)malloc(size * sizeof(float));

    // I/p: Elements
    putchar('\n');
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element |%3d|:", i + 1);
        scanf("%f", &ptr[i]);
    }

    // O/p: Elements
    puts("\nStored values:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%3d|: %f\n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}