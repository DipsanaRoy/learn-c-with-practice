// C7.1. Array to store marks

#include <stdio.h>

int main()
{
    /* Naive way to store marks:
        int marks1 = 32, marks2 = 52, ...;
     */

    int marks[4]; // Integer array of size 4
    
    // array_name [index no.] = assign value;

    // Smart way:
    marks[0] = 32;  // → Start index 0
    marks[1] = 52;  // → index 1
    marks[2] = 65;  // → index 2
    marks[3] = 90;  // → Last index [size - 1] = 3
    
    return 0;
}