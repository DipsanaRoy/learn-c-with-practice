// C7.8. Pointer Arithmetic

#include <stdio.h>
#include <stdint.h> // Use uintptr_t from <stdint.h>

// uintptr_t is an unsigned integer type guaranteed to store a pointer without size mismatch warnings.

int main()
{
    // In general architecture, size of 1 int is of 4 bytes that can vary in other architectures
    int i = 1;
    int *iptr = &i;

    printf("\n***int***\nptr = %u\n", (uintptr_t)iptr);

    iptr++;
    printf("After ptr++, ptr = %u\n", (uintptr_t)iptr);

    iptr = iptr + 1;
    printf("After ptr + 1, ptr = %u\n", (uintptr_t)iptr);

    iptr += 2;
    printf("After ptr + 2, ptr = %u\n", (uintptr_t)iptr);

    iptr -= 2;
    printf("After ptr - 2, ptr = %u\n", (uintptr_t)iptr);

    // In general architecture, size of 1 char is of 1 byte that can vary in other architectures
    char j = 'd';
    char *cptr = &j;

    printf("\n***char***\nptr = %u\n", (uintptr_t)cptr);

    cptr++;
    printf("After ptr++, ptr = %u\n", (uintptr_t)cptr);

    cptr = cptr + 1;
    printf("After ptr + 1, ptr = %u\n", (uintptr_t)cptr);

    cptr += 2;
    printf("After ptr + 2, ptr = %u\n", (uintptr_t)cptr);

    cptr -= 2;
    printf("After ptr - 2, ptr = %u\n", (uintptr_t)cptr);

    // In general architecture, size of 1 float is of 4 bytes that can vary in other architectures
    float k = 9.654;
    float *fptr = &k;

    printf("\n***float***\nptr = %u\n", (uintptr_t)fptr);

    fptr++;
    printf("After ptr++, ptr = %u\n", (uintptr_t)fptr);

    fptr = fptr + 1;
    printf("After ptr + 1, ptr = %u\n", (uintptr_t)fptr);

    fptr += 2;
    printf("After ptr + 2, ptr = %u\n", (uintptr_t)fptr);

    fptr -= 2;
    printf("After ptr - 2, ptr = %u\n", (uintptr_t)fptr);

    return 0;
}