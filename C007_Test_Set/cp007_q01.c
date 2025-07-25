// CP7.1. Create a 10 number array. Verify using pointer arithmetic that (ptr + 2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main()
{
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100}; // create 10 number array

    // 1st Output: ptr points to the first array element
    int *ptr = arr;
    printf("\nValue at ptr           = %d\n", *ptr);
    printf("arr[0] element         = %d\n", arr[0]);

    printf("\nptr points to          = %p\n", (void *)ptr);
    printf("arr[0] address         = %p\n", (void *)&arr[0]);
    
    // 2nd Output: (ptr + 2) points to the third array element
    ptr = arr + 2;
    printf("\nValue at (ptr + 2)     = %d\n", *ptr);
    printf("arr[2] element         = %d\n", arr[2]);

    printf("\n(ptr + 2) points to    = %p\n", (void *)ptr);
    printf("arr[2] address         = %p\n", (void *)&arr[2]);

    return 0;
}