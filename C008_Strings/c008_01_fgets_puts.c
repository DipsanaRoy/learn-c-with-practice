// C8.1. Input a string by fgets

#include <stdio.h>

int main()
{
    // Init: String to store name of max length: 100
    char name[100];

    // Input
    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin); // gets(name); -> works too but unsafe. Why? Read: C008_NOTES.md

    puts(name); // Static String Output
    return 0;
}