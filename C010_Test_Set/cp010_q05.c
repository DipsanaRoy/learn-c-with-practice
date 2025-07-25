// CP10.5. Modify an integer containing file to double its value.

#include <stdio.h>

int main()
{
    FILE *ptr; // File pointer
    int num;   // store integer

    ptr = fopen("sample.txt", "r"); // Open the file || R
    fscanf(ptr, "%d", &num);

    ptr = fopen("sample.txt", "w"); // Open the file || W
    fprintf(ptr, "%d", num * 2);    // Doubled integer value

    fclose(ptr); // Close the file
    puts("\nInteger value doubled successfully!");
    return 0;
}