// CP5.6. Sum of first n natural numbers [Recursion]

#include <stdio.h>

// Function Prototype
int sum(int num);

int main()
{
    int num;
    printf("\nEnter the nth number: ");
    scanf("%d", &num);

    printf("Sum of first %d natural numbers is %d\n", num, sum(num)); // Function Call
    return 0;
}

// Function Definition
int sum(int num)
{
    if (num < 2) return num;

    return num + sum(num - 1);
}