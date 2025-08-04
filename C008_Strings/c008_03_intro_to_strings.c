// C8.3. Initialize a string

#include <stdio.h>

int main()
{
    // Init: String manually
    char str[] = {'Y', 'o', 'u', 'r', '\0'}; // '\0' is null

    // Init: String conveniently
    char str2[] = "Name"; // NOTE: DOUBLE QUOTES ARE MUST!!!

    printf("\nFirst name: %s", str);
    printf("\nLast name: %s\n", str2);
    return 0;
}