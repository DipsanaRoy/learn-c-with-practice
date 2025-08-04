// CP4.1. Print multiplication table of a given number n

#include<stdio.h>

int main(){
    // i for iteration; n for the number;
    int i, n;

    puts("Hey there! Enter a number below and I'll show you its multiplication table");
    scanf("%d", &n);

    printf("Multiplication Table of %d is:\n", n);
    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}