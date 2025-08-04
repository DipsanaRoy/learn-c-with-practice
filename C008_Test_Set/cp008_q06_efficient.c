// CP8.6. Encrypt a string by adding 1 to the ASCII value of its characters efficiently

#include<stdio.h>
#include<string.h>

// Function Prototype
void encrypt(char *st);

int main()
{
    // User I/p: String
    char st[100];
    printf("\nEnter a string: ");
    scanf("%100[^\n]", st);
    printf("\nOriginal string: %s\n", st);

    encrypt(st); // Function Call
    
    printf("\nEncrypted string: %s\n", st);
    return 0;
}

// Function Definition
void encrypt(char *st)
{
    // Encrypt string by ASCII + 1
    while (*st != '\0')
    {
        // Don't get confused!
        *st += 1; // -> value at(*) that char address = (value at that char address + 1);
        st++;
    }
}