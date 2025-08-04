// C7.4. Input and display marks of 5 students

#include <stdio.h>

int main()
{
    int i, marks[5];

    // Input:
    putchar('\n'); // Remember me? prints only 1 ch
    for (i = 0; i < 5; i++)
    {
        printf("Enter Student %d | marks: ", i + 1);
        scanf("%d", &marks[i]);
        // Note: Only Prefix or Postfix ++ -- operators changes values. Read: C007_ARR_NOTES.md!
    }

    // Display:
    putchar('\n'); // lightweight
    for (i = 0; i < 5; i++)
        printf("Student %d | marks: %d\n", i + 1, marks[i]);

    return 0;
}