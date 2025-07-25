// C8.6. Print length of String

#include<stdio.h>
#include<string.h>

int main()
{
    char *st = "Hello";
    size_t stLen = strlen(st); // store string length
    printf("String length: %zu\n", stLen);
    return 0;
}