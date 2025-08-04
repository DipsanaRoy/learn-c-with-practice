// C6.4. Call by reference function

#include <stdio.h>

// Function Prototypes
void wrongSwap(int a, int b), swap(int *a, int *b);

int main()
{
    int x, y; // two numbers: x and y;
    puts("\nEnter two numbers one by one");
    scanf("%d%d", &x, &y);

    printf("\nBefore wrongSwap, x = %d and y = %d\n", x, y);
    wrongSwap(x, y); // values will not change
    printf("After wrongSwap, x = %d and y = %d\n", x, y);

    printf("\nBefore swap, x = %d and y = %d\n", x, y);
    swap(&x, &y); // values will change
    printf("After swap, x = %d and y = %d\n", x, y);

    return 0;
}

// Function Descriptions

// call by value function
void wrongSwap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by reference function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}