// C8.8. Concatenate two Strings

#include <stdio.h>
#include <string.h>

int main()
{
    char target[50] = "Hello"; // Set String length: 50 to avoid overflow
    char *source = "_User!";
    
    printf("\ntarget before: \"%s\"\n", target);
    strcat(target, source);   // String Concatenation
    printf("target  after: \"%s\"\n", target);
    return 0;
}