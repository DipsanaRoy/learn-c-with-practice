// CP6.5. Print the value of a variable i by using "pointer to pointer" type of variable

#include <stdio.h>

int main()
{
    int i = 1;
    int *ptr = &i;
    int **ptr2 = &ptr;

    printf("\nThe value of i is %d\n"
           "Using pointer to pointer is %d\n",
           i, **ptr2);

    // Think of it like: *(*ptr2)

    // => value at (value at (ptr2))
    // => ptr2's value is address of ptr

    // => value at (value at (address of ptr))
    // => value at address of ptr is address of i

    // => value at (address of i)
    // => value of i

    return 0;
}