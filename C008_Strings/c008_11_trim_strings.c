// C8.11. Let's trim a String in C. Why unsigned char? Read: c8_string_notes.md

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function Prototype
void trim(char *str);

int main()
{
    char text[] = "   Hello, C World!   ";
    printf("Before text: '%s'\n", text);    

    trim(text); // call trim
    printf("Trimmed: '%s'\n", text);
    return 0;
}

// trim function
void trim(char *str)
{
    size_t start = 0;
    size_t end = strlen(str) - 1;

    puts("\nBefore:");
    printf("String start: %zu\n"
           "String end: %zu\n",
           start, end);

    // Trim leading spaces
    while (isspace((unsigned char)str[start]))
        start++;

    // Trim trailing spaces
    while (end > start && isspace((unsigned char)str[end]))
        end--;

    puts("\nAfter:");
    printf("String start: %zu\n"
           "String end: %zu\n",
           start, end);

    // Shift trimmed string to the start
    size_t i = 0;
    while (start <= end)
    {
        str[i++] = str[start++];
    }
    str[i] = '\0'; // Null-terminate the result
}