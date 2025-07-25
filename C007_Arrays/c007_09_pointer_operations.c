// C7.9. Meaningful Pointer Operations (Visualizing Pointer Arithmetic)

#include <stdio.h>
#include <stdint.h>

// Function Prototypes
void add(), sub1(), sub2(), comparison();

// Declare static integers and pointers
int n1 = 1, n2 = 2;
int *ptr1 = &n1, *ptr2 = &n2;

int main()
{
    puts("\nPointer Operations:\n"
         "1. Addition    ->   Number + Pointer"
         "2. Subtraction ->   Pointer - Number"
         "3. Subtraction ->   Pointer - Pointer"
         "4. Comparison  ->   Equality check of two pointer variables");

    add();        // 1. Addition of a number to a pointer
    sub1();       // 2. Subtraction of a number from a pointer
    sub2();       // 3. Subtraction of one pointer from another
    comparison(); // 4. Comparison of two pointer variables
    return 0;
}

// Function Definitions

// ptr + num
void add()
{
    puts("\n1. Addition of a number to a pointer");
    printf("Before: ptr1 = %u\n", (uintptr_t)ptr1);

    ptr1 += n1;
    printf("After: ptr1 + %d, ptr1 = %u\n", n1, (uintptr_t)ptr1);
}

// ptr - num
void sub1()
{
    puts("\n2. Subtraction of a number from a pointer");
    printf("Before: ptr2 = %u\n", (uintptr_t)ptr2);

    ptr2 -= n2;
    printf("After: ptr2 - %d, ptr2 = %u\n", n2, (uintptr_t)ptr2);
}

// ptr - ptr
void sub2()
{
    puts("\n3. Subtraction of one pointer from another");
    int diff = ptr1 - ptr2;

    printf("ptr1 = %u\n", (uintptr_t)ptr1);
    printf("ptr2 = %u\n", (uintptr_t)ptr2);
    printf("ptr1 - ptr2 = %d (elements apart)\n"
           "ptr2 - ptr1 = %d (elements apart)\n",
           diff, -diff);
}

// ptr1 == ptr2 (comparison)
void comparison()
{
    puts("\n4. Comparison of two pointer variables");
    printf("ptr1 = %u\n", (uintptr_t)ptr1);
    printf("ptr2 = %u\n", (uintptr_t)ptr2);

    if (ptr1 > ptr2)
        puts("ptr1 is greater");
    else if (ptr2 > ptr1)
        puts("ptr2 is greater");
    else
        puts("Both pointers point to the same location");
}