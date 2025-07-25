// CP7.2. False: *(s + 3) points to 4th element, not 3rd

#include <stdio.h>

int main() {
    int s[] = {10, 20, 30, 40, 50};

    printf("s[3]     = %d\n", s[3]);     // Array indexing
    printf("*(s + 3) = %d\n", *(s + 3)); // Pointer arithmetic

    return 0;
}