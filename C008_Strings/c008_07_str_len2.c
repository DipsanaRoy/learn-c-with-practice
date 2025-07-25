// C8.2. strlen() alternative

#include <stdio.h>

// Function Prototype
size_t stLen(char *st);

int main()
{
    char st[] = "Hello";       // Init: String
    size_t length = stLen(st); // Function Call

    printf("\nString length: %zu\n", length);
    return 0;
}

// Function Definition
size_t stLen(char *st)
{
    size_t count = 0;
    while (*st++ != '\0') count++;
    return count;
}