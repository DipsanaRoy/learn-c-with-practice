// CP8.8. Count the occurrence of a given character in a String

#include <stdio.h>
#include <string.h>

// Function Prototype
int countOccurrence(char *st, char c);

int main()
{
    // Init: String and character
    char st[100], c;

    // String I/p
    printf("\nEnter a string: ");
    fgets(st, sizeof(st), stdin);

    st[strcspn(st, "\n")] = '\0'; // To remove '\n' from st

    // Char I/p
    printf("\nEnter a character to count it's occurrence: ");
    scanf(" %c", &c);

    // O/p
    int ch = countOccurrence(st, c);
    printf("\n\'%c\' is present inside \"%s\": %d time%s.", c, st, ch, (ch > 1? "s" : "" )); // Function Call
    return 0;
}

// Function Definition
int countOccurrence(char *st, char c)
{
    int count = 0;
    // Counting c's occurrences character-wise
    for (; *st != '\0'; st++)
        if (*st == c) count++;

    return count;
}