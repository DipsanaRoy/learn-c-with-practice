// CP8.5. Write your own version of strcpy from <string.h>

#include <stdio.h>
#include <string.h>

// Function Prototype
void my_strcpy(char *target, char *source);

int main()
{
    // I/p: target and source
    char target[100], source[50];

    printf("\nEnter a target String: ");
    fgets(target, sizeof(target), stdin);

    printf("\nEnter a String to be copied: ");
    fgets(source, sizeof(source), stdin);

    // Remove '\n' from input strings
    target[strcspn(target, "\n")] = '\0'; // 'strcspn' looks for a string & returns its index when found
    source[strcspn(source, "\n")] = '\0';

    my_strcpy(target, source); // Overwrites target

    // O/p
    printf("\nCopied target string: %s", target);
    return 0;
}

// Function Definition
void my_strcpy(char *target, char *source)
{
    while (*source != '\0')
        *target++ = *source++;
    *target = '\0'; // Null-terminate the target string
}