// C11.5. Calloc to store n integer numbers

#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation

int main()
{
    // User I/p: n
    size_t n;
    printf("\nHow many integers you want to store?: ");
    scanf("%zu", &n);

    int *ptr = (int *)calloc(n, sizeof(int)); // Allocate continuous space in heap memory for n blocks

    // I/p: Elements
    putchar('\n');
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter element |%3zu|: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // O/p: Elements
    puts("\nStored values:");
    for (size_t i = 0; i < n; i++)
    {
        printf("Element |%3zu|: %d\n", i + 1, ptr[i]);
    }
    free(ptr); // Free heap memory
    return 0;
}