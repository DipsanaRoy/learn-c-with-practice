// CP8. Concatenate two Strings by custom 'strcat'.

#include <stdio.h>
#include <string.h>

// Function Prototypes
void my_strcat(char *target, char *source);
size_t str_len(char *st);

int main()
{
    char target[50] = "Hello";
    char *source = "_User!";
    
    puts("\nBefore:");
    printf("source: \"%s\"\n", source);
    printf("target: \"%s\"\n", target);
    
    my_strcat(target, source); // Concatenate Strings

    puts("\nAfter:");
    printf("target: \"%s\"\n", target);
    return 0;
}

// Function Definitions
void my_strcat(char *target, char *source)
{
    size_t tarLen = str_len(target);
    while (*source != '\0' )
    {
        target[tarLen] = *source;
        tarLen++;
        source++;
    }
    target[tarLen] = '\0';
}

size_t str_len(char *st)
{
    size_t count = 0;
    while (*st++ != '\0')
        count++;
    return count;
}