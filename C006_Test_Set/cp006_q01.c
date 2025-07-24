// CP6.1. Print the `address` of a variable and use `it` to get the the variable value.

#include <stdio.h>

int main()
{
    char var = 'D';
    char *add = &var;

    printf("\nThe address of `%c` is %p\n"
           "The value at %p is `%c`\n\n",
           var, (void *)add,
           (void *)add, *add);

    return 0;
}