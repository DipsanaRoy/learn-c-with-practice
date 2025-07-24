// CP6.2. Create a variable i. Print the address of i. Pass the variable to a function and print its address. Are these addresses same? If not why?

#include <stdio.h>

// Function Prototype
void pass(int i);

int main()
{
    int i = 9;

    printf("The address of %d in main() is %p\n", i, (void *)&i);

    pass(i); // call by value is the answer

    return 0;
}

// Function Definition
void pass(int i)
{
    printf("The address of %d in pass() is %p\n", i, (void *)&i);
}