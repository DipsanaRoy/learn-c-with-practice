// CP8.2. Take strings as user inputs via %c and %s with equality confirmation.

#include <stdio.h>
#include <string.h>

int main()
{
    char st1[50], st2[50], c; // 'c' for character-wise input of st1
    size_t st_len = sizeof(st1) / sizeof(st1[0]);

    // I/p: st1 by %c
    printf("\nEnter your name: ");
    fflush(stdin); // flushes character to avoid new line('\n') but unsafe. Why? Read: cp8_notes.md
    int i = -1;
    do {
        scanf("%c", &c); // c = getchar(); works too & endorsed
        st1[++i] = c;
    } while (c != '\n' && i < st_len);
    st1[i] = '\0';

    // I/p: st2 by %s
    printf("\nEnter your mom's name: ");
    scanf("%s", st2);

    // O/p
    printf("\nHi! %s, the child of %s.\n", st1, st2);
    printf("\nstrcmp returns: %d.\n", strcmp(st1, st2)); // Equality Check
    return 0;
}