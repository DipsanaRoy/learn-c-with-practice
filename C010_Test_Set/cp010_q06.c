// CP10.6. Modify integers containing file to double their value.

#include <stdio.h>

int main()
{
    // Open & validate file || R
    FILE *fptr = fopen("numbers.txt", "r");
    if (fptr == NULL)
    {
        puts("\nFailed to open the file.");
        return 1;
    }

    // Open & validate temp file || R
    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        puts("\nFailed to create a temporary file.");
        fclose(fptr);
        return 1;
    }

    // Store doubled values to "temp.txt"
    int num;
    while (fscanf(fptr, "%d", &num) == 1)
        fprintf(temp, "%d\n", num * 2);

    // Close both files
    fclose(fptr);
    fclose(temp);

    // Replace the original file with the temporary file
    remove("numbers.txt");
    rename("temp.txt", "numbers.txt");

    puts("\nAll integers in the file are doubled successfully!");
    return 0;
}