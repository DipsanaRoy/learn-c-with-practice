// C5.2. One function to display three greetings of a day by three inner functions.

#include <stdio.h>

void goodMorning(), goodAfternoon(), goodNight(), greet(); // Function Prototypes

int main()
{
    greet(); // Function Call
    return 0;
}

// Function Definitions

void greet()
{
    // Inner Function Calls
    goodMorning();
    goodAfternoon();
    goodNight();
}

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