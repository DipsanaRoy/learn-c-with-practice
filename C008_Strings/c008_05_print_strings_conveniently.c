// C8.5. Print a string conveniently!

#include <stdio.h>

int main()
{
    // Both of them means the same
    char ptr[] = "Aloo Bhujia!";
    char *ptr1 = "Bhel Puri!";

    //  %s works for pointers too
    printf("%s\n%s\n", ptr, ptr1);
    return 0;
}