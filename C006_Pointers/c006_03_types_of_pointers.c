// C6.3. Pointers can store the address of different data types too.

#include <stdio.h>

int main()
{
    float num = 3.14;
    char letter = 'A';
    double value = 123.45;

    float *floatPtr = &num;
    char *charPtr = &letter;
    double *doublePtr = &value;

    printf("Float value: %.2f\n", *floatPtr);
    printf("Char value: %c\n", *charPtr);
    printf("Double value: %.2f\n", *doublePtr);
    return 0;
}