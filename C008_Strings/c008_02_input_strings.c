// C8.2. Input strings

#include <stdio.h>

int main()
{
    char name[100]; // Init: name String

    // `&name[0]` works but `&name` does not as it's initializing from the 1st element
    printf("\nWhat's your full name?: ");
    scanf("%[^\n]", name);
    printf("Your full name is %s!\n", name);

    // `%s` -> reads a characters sequence till whitespace (like spaces, tabs, or newlines)
    printf("\nWhat's your full name again?: ");
    scanf("%s", name);

    printf("Your first name is %s!\n", name);
    return 0;
}