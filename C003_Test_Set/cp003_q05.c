// CP3.5. Determine whether the entered character is lowercase or not

#include <stdio.h>

int main()
{
    char ch; // initialized character

    printf("\nEnter a ch: ");
    scanf(" %c", &ch);

    // if (ch >= 97 && ch <= 122) [ASCII values] ✅
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase letter.\n", ch);
    }

    // else if (ch >= 65 && ch <= 90) [ASCII values] ✅
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    else puts("Please enter a valid letter!");
    return 0;
}