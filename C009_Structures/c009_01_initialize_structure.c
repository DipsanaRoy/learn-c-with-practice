// C9.1. Initialize structures in C

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
    // Initialize: employee variable e1
    struct employee e1; // will lead to errors if skipped

    e1.salary = 10000.63;
    e1.code = 9;
    strcpy(e1.name, "Mona Lisa");
    // e1.name = "Hasta La Visa"; // error: assignment to expression with array type

    // Output: e1
    printf("\nEmployee name: %s\n", e1.name);
    printf("Code: %d\n", e1.code);
    printf("Salary: %.2f\n", e1.salary);
    return 0;
}