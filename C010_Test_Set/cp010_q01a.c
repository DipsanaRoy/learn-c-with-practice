// CP10.1a. Read three integers from a file

#include <stdio.h>

int main()
{
    // Init: File Pointer and a, b, c to store 3 integers
    FILE *fptr;
    int a, b, c ;

    // 'Open' "num.txt" in 'read' mode
    fptr = fopen("num.txt", "r");

    if (fptr == NULL)
    {
        puts("\nThe file didn't existed.");
    }
    else
    {
        // '%d,' reads integers separated by commas & '%d<space>' reads integers separated by space
        if (fscanf(fptr, "%d, %d, %d", &a, &b, &c) == 3)
        {
            printf("\nThree numbers from the file are:\n%d\n%d\n%d\n", a, b, c);
        }
        else
        {
            puts("\nFailed to read three numbers from the file.");
        }
    }
    fclose(fptr); // Close the file
    return 0;
}