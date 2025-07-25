// C9.7. typedef keyword

#include <stdio.h>
#include <string.h>

// Structure data types: Must declare it before function prototype
typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

// Function Prototype
void show(struct employee emp);

int main()
{
    // typedef allows: Structure variable declarations WITHOUT the 'struct' keyword
    emp e1;
    emp *ptr;

    ptr = &e1; // ptr points to e1

    // Set e1 values via ptr
    (*ptr).code = 19;
    ptr->salary = 68059.986;
    strcpy(ptr->name, "Harry");

    show(e1); // shows employee details
    return 0;
}

// Function Definition
void show(emp e)
{
    printf("\nEmployee Name: %s", e.name);
    printf("\nCode: %d", e.code);
    printf("\nSalary: %.2f\n", e.salary);
}