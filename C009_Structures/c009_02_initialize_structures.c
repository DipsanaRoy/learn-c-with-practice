// C9.2. Initialize structures

#include <stdio.h>
#include <string.h>

// Structure data type
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    // Init: employee Structure
    struct employee archerQueen = {2, 150, "Wall Breaker"};

    // O/p employee archerQueen details
    printf("\nEmployee name: %s\n", archerQueen.name);
    printf("Code: %d\n", archerQueen.code);
    printf("Salary: %.2f\n", archerQueen.salary);

    struct employee BK = {0}; // Every sub-variable is initialized to 0

    // O/p employee BK details
    printf("\nEmployee name: %s\n", BK.name);
    printf("Code: %d\n", BK.code);
    printf("Salary: %.2f\n", BK.salary);
    return 0;
}