// C7.3. Array Inputs

#include <stdio.h>

int main()
{
    int marks[4];

    printf("\nEnter Student 1 | marks: ");
    scanf("%d", &marks[0]);

    printf("Enter Student 2 | marks: ");
    scanf("%d", &marks[1]);

    printf("Enter Student 3 | marks: ");
    scanf("%d", &marks[2]);

    printf("Enter Student 4 | marks: ");
    scanf("%d", &marks[3]);

    printf("\nMarks entered: %d, %d, %d and %d.\n",
           marks[0], marks[1], marks[2], marks[3]);

    return 0;
}