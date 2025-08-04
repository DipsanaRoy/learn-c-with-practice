// CP3.6. Find greatest of four numbers entered by the user

#include <stdio.h>

int main()
{
    int a, b, c, d; // Initialize four numbers

    puts("\nEnter any four numbers one by one");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int greatest = a; // stores greatest value

    // Without {}, only 1 line runs after if / else if / else
    if (b > greatest)
        greatest = b;
    
    if (c > greatest)
        greatest = c;
    
    if (d > greatest)
        greatest = d;

    printf("\n%d is the greatest!\n", greatest);
    return 0;
}