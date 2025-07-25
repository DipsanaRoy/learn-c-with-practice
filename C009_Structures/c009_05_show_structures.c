// C9.5. Show Structures

#include<stdio.h>
#include<string.h>

// Structure data types: Declare it before function prototype(s)
struct employee
{
    int code;
    float salary;
    char name[20];
};

// Function Prototype
void show(struct employee emp);

int main()
{
    // Init: employee 'e1'
    struct employee e1;
    struct employee *ptr = &e1;

    ptr->code = 19;
    ptr->salary = 68059.986;
    strcpy(ptr->name, "Harry");

    show(e1); // Display 'e1' details, NOTE: it's pass by value.

    printf("\nActual employee code: %d\n", e1.code); // so e1.code will be unchanged
    return 0;
}

// Function Definition
void show(struct employee emp)
{
    emp.code = 34;

    printf("\nEmployee Name: %s\n", emp.name);
    printf("Code: %d\n", emp.code);
    printf("Salary: %.2f\n", emp.salary);
}