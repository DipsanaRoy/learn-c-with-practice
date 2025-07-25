// CP8.8. Count the occurrence of a given character in a String

#include <stdio.h>

// Function Prototype
int countOccurrence(char *st, char c);

int main()
{
    // Init: String and character
    char st[100], c;

    // String I/p
    printf("\nEnter a string: ");
    scanf("%[^\n]", st);

    // To avoid: second scanf catching '\n'
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF); // getchar() gets character input from buffer

    // Char I/p
    printf("\nEnter a character to count it's occurrence: ");
    scanf("%c", &c);

    // O/p
    ch = countOccurrence(st, c);
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