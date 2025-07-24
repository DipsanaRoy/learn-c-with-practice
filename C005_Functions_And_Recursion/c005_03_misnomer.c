// C5.3. change(); function is a Misnomer...
// A misnomer is a wrong or misleading name for something. Ex. Calling a "koala bear" a bear — it's a marsupial.

#include<stdio.h>

// Function Prototype
void change (int a);

int main()
{
    int b = 100;

    printf("Value of b before change is %d\n", b);

    change(b); // Function Call

    printf("Value of b after change is %d\n", b); 

    return 0;
}

// Function Definition

// Misnomer --> This b is different from b in main()
void change (int b)
{
    b = 77; // value of b will not change in main()
}