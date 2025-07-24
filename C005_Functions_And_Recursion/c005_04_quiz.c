// C5.4. Display three greetings of a day

#include<stdio.h>

void goodMorning(), goodAfternoon(), goodNight(); // Function Prototypes

int main()
{
    goodMorning(), goodAfternoon(), goodNight(); // Function Calls
    return 0;
}

// Function Descriptions

void goodMorning()
{
    puts("Good Morning!");
}

void goodAfternoon()
{
    puts("Good Afternoon!");
}

void goodNight()
{
    puts("Good Night!");
}