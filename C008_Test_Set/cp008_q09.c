// CP8.9. Check whether a given character is present in a string

#include <stdio.h>

// Function Prototype
int look(char *st, char c);

int main()
{
    // I/p: String & Character 
    char st[100], c; int ch;
    printf("\nEnter a string: ");
    scanf("%[^\n]", st);

    while ((ch = getchar()) != '\n' && ch != EOF); // To avoid: second scanf catching '\n'
    printf("\nEnter a character to look for: ");
    scanf("%c", &c);

    // O/p
    int isPresent = look(st, c); // call look
    if (isPresent)
        printf("\n\'%c\' is present at position %d!\n", c, isPresent);
    else
        printf("\n\'%c\' is not present!\n", c);
    
    return 0;
}

// Function Definition
int look(char *st, char c)
{
    int i = 0;
    for (; st[i] != '\0'; i++)
    {
        // checks 'c' character-wise
        if (st[i] == c)
            return i + 1; // 1-based index
    }
    return 0;
}