// C10.4. Read two numbers from a file

#include <stdio.h>

int main()
{
    // Init: 2 Numbers
    int num1, num2;

    FILE *ptr = fopen("Harry.txt", "r"); // Open file in read mode

    fscanf(ptr, "%d", &num1); // input int values from file: fscanf(file_pointer, ...like scanf...);
    fscanf(ptr, "%d", &num2);

    fclose(ptr); // It's a good practice to close the file after performing file operations!

    // Non-file dependent operations:
    printf("\nnum 1 is %d"
           "\nnum 2 is %d\n",
           num1, num2);
    return 0;
}