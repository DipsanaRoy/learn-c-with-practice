// C10.2. Check if the files were opened successfully.

#include <stdio.h>

int main()
{
    // Declare pointers for files
    FILE *ptr1; 
    FILE *ptr2;

    ptr1 = fopen("sample.txt", "r");  // Open "sample.txt" for reading
    ptr2 = fopen("sample2.txt", "w"); // Open "sample2.txt" for writing

    // Check if the files were opened successfully
    if (ptr1 == NULL || ptr2 == NULL)
    {
        puts("\nFile opening failed.");
        return 1; // Exit the program with an error code
    }

    // Perform file operations

    // Don't forget to close the files
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
