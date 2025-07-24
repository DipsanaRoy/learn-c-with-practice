// CP4.2. Print multiplication table of a given number n in reverse order

#include<stdio.h>

int main(){
    // i for iteration; n for the number;
    int i, n;

    puts("Hey there! Enter a number below and I'll show you its multiplication table");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d in reverse order is:\n", n);
    for (i = 10; i ; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}