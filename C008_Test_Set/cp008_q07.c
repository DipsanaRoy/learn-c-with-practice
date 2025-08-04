// CP8.7. Decrypt the string using encrypt function in problem 6

#include <stdio.h>
#include <string.h>

// Function Prototype
void encrypt(char *st), decrypt(char *st);

int main()
{
    // I/p: String
    char st[100];
    printf("\nEnter a string: ");
    scanf("%100[^\n]", st);
    printf("\nOriginal string: %s\n", st);

    encrypt(st); // call encrypt
    printf("\nEncrypted string: %s\n", st);

    decrypt(st); // call decrypt
    printf("\nDecrypted string: %s\n", st);
    return 0;
}

// Function Definitions
void encrypt(char *st)
{
    // Encrypt string by ASCII + 1
    while (*st != '\0')
    {
        *st += 1;
        st++;
    }
}

void decrypt(char *st)
{
    // Decrypt string by ASCII - 1
    while (*st != '\0')
    {
        *st -= 1;
        st++;
    }
}