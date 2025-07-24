// C5.1. Basic structure of a function

#include <stdio.h>

void display(); // Function Prototype

int main()
{
    puts("Initialize display function...");

    display(); // Function Call

    puts("Display function finished its work!");

    return 0;
}

// Function Description
void display()
{
    puts("This is display!");
}