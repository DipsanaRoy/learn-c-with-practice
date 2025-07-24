// CP5. Program against question 5

#include <stdio.h>

int main()
{
    int a = 3;
    // Interview Question
    printf("%d %d %d\n", a, ++a, a++); // Passed Arguments order: Right to Left or Left to Right [Compiler Dependent]
    return 0;
}