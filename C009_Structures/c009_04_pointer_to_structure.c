// C9.4. Pointers to structures

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    // Init: pointer to structure e1
    struct employee e1;
    struct employee *ptr = &e1;

    // struct employee *ptr;
    // ptr = e1; --> also works

    (*ptr).code = 19;
    ptr->salary = 10000.57; // '->' (arrow operator) also access pointer to structure sub-variables

    printf("\nEmployee Code: %d", e1.code);
    printf("\nEmployee Salary: %d\n", e1.salary);
    return 0;
}