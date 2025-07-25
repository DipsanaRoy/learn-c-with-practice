// C10.3. Read & print the full content of a file.

#include <stdio.h>

int main()
{
    FILE *ptr = fopen("demo.txt", "r"); // Open "demo.txt" by 'read' mode

    int c; // int for EOF compatibility
    while ((c = fgetc(ptr)) != EOF)
    {
        putchar(c); // Or printf("%c", c);
    }

    fclose(ptr); // Close the file
    return 0;
}