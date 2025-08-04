// C7.6. Access an array by pointers

#include <stdio.h>

int main()
{
    // Initialize: marks to store marks, ptr as pointer
    int marks[4], *ptr = &marks[0]; // int *ptr = marks; works too. Why? Read: C007_ARR_NOTES.md

    // Input
    for (int i = 1; i < 5; i++)
    {
        printf("Enter Student %d | marks: ", i);
        scanf("%d", ptr);
        ptr++;
    }

    // Output
    putchar('\n');
    for (int i = 0; i < 4; i++)
    {
        printf("Student %d | marks: %d\n", i + 1, marks[i]);
    }
    return 0;
}