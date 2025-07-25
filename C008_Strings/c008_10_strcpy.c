// C8.10. Copy a String

#include <stdio.h>
#include <string.h>

int main()
{
    char *s2 = "That";
    char s1[45] = "This";

    printf("\ns1: %s"
           "\ns2: %s\n",
           s1, s2);

    strcpy(s1, s2); // Copy s2 String to s1
    printf("After strcpy(s1, s2), s1: %s\n", s1);
    return 0;
}