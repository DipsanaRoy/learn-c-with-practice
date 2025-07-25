// C10.1. 'fgetc', 'fputc' and 'putc' demonstration.

#include <stdio.h>

int main()
{
    // Init: File Pointer
    FILE *ptr;

    // 'Open' another file in 'write' mode
    ptr = fopen("demo.txt", "w");

    // Put characters in the file
    putc('H', ptr);  // Valid ✔️ - faster (macro)
    fputc('i', ptr); // Also valid ✔️ - slower (function)
    putc('!', ptr);
    putc(' ', ptr);
    putc('0', ptr);
    putc('1', ptr);

    // Rewinds the file pointer to start before reading
    rewind(ptr);

    // 'Open' a file in 'read' mode
    ptr = fopen("demo.txt", "r");

    char c = fgetc(ptr); // get first character from the file
    printf("\nFirst character from the file: %c\n", c);

    puts("\nRest of the file contents character-wise:");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%c\n", fgetc(ptr));
    }

    fclose(ptr); // close the file
    return 0;
}