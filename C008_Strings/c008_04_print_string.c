// C8.4. Print a string

#include <stdio.h>

int main() {
    char *ptr = "Izar"; // Pointer points String

    while (*ptr) printf("%c", *ptr++); // Prints String Character-wise

    return 0;
}