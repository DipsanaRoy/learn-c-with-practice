// CP8.6. Encrypt a string by adding 1 to the ASCII value of its characters

#include<stdio.h>
#include<string.h>

int main()
{
    // User I/p: String
    char st[100]; // Init: String
    printf("\nEnter a string: ");
    scanf("%[^\n]", st);
    printf("\nOriginal string: %s\n", st);

    size_t len = strlen(st); // String length

    // Encrypt string by +1
    for (size_t i = 0; i < len; i++)
    {
        st[i] = (char)(((int)st[i]) + 1);
    }
    printf("\nEncrypted string: %s\n", st);
    return 0;
}