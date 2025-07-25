// CP10.2. Generate multiplication table of a given number in text format. Ensure the readability and formatting of the file.

#include <stdio.h>

int main()
{
    // Init: File Pointer
    FILE *ptr;

    // User I/p: Number
    int num;
    printf("\nWhose multiplication table you want to store?: ");
    scanf("%d", &num);

    // Create a number based dynamic file
    char filename[20];
    snprintf(filename, sizeof(filename), "mul_table%d.txt", num);
    ptr = fopen(filename, "w");

    // Write the table to the file
    fprintf(ptr, "Multiplication table of '%d' is:\n", num);
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, i, i * num);
    }
    fclose(ptr);
    printf("Generated multiplication table of %d to mul_table%d.txt!\n", num, num);
    return 0;
}