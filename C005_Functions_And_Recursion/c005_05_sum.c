// C5.5. Calculate sum of two numbers using fuction

#include<stdio.h>

// Function Prototype
int sum (int a, int b); // sum has function parameters(i.e. inputs): a and b with return type of int.

int main()
{
    // This var c has no relation with the var c in sum function
    int c = sum (10, 9); // Function call with arguments: 10 and 9
    
    printf("The value of c is %d\n", c);
    return 0;
}

// Function Description

// Sum is a function which takes a and b as inputs
int sum (int a, int b)
{
    int c;
    c = a + b;
    return c; // and returns an integer output
}