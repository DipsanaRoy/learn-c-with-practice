// CP6.3. Change the value of a variable to ten times of its current value. Write a function and pass the value by `reference`.

#include <stdio.h>

// Function Prototype
int change(int *var);

int main()
{
    int variable;

    printf("\nEnter a number: ");
    scanf("%d", &variable);

    printf("\nValue before change is %d\n", variable);

    change(&variable); // Function Call

    printf("Value after change is %d\n", variable);

    return 0;
}

// Function Description
int change(int *var)
{
    *var = *var * 10;
    return 0; // Don't get confused ;). It just returns 0 at the end.
}