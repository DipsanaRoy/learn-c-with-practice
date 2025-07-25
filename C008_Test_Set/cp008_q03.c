// CP8.3. Write your own version of strlen function from <string.h>

#include <stdio.h>

// Function Prototype
size_t strlen(char *ptr);

int main()
{
    char st[] = "Halwa Wala";                     // Init: String
    printf("\nSt's length is %zu\n", strlen(st)); // Call strlen
    return 0;
}

// Function Definition
size_t strlen(char *ptr)
{
    size_t count = 0;
    for (; *ptr++ != '\0'; count++) {}
    return count;
}