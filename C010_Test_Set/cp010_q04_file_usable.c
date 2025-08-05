// CP10.4. Take name and salary of 2 employees as user input and write them to a text file in the following format (recommended):
// name 1, salary
// name 2, salary

#include <stdio.h>
#include <string.h>

// Struct variable employee
typedef struct employee
{
    char name[30];
    int salary;
} emp;

// Function Prototype
void inputEmp(emp e[], size_t n);

int main()
{
    size_t n; // no. of employees

    // I/p: Employee Details
    printf("\nHow many employees you want to enter?: ");
    scanf("%zu", &n);
    emp e[n];
    inputEmp(e, n);

    // Create emp no. based dynamic file
    char filename[20];
    snprintf(filename, sizeof(filename), "emp%zu.txt", n);
    FILE *ptr = fopen(filename, "w"); // Open the file || W

    // Write employee details to the file
    for (size_t i = 0; i < n; i++)
        fprintf(ptr, "%s, %d\n", e[i].name, e[i].salary);

    fclose(ptr);
    printf("\nSaved %zu employee details to emp%zu.txt!\n", n, n);
    return 0;
}

// Function Definition
void inputEmp(emp e[], size_t n)
{
    puts("\nEnter the employee details one by one!");
    for (size_t i = 0; i < n; i++)
    {
        char name[sizeof(e[i].name) / sizeof(e[i].name[0])];
        for (int c; (c = getchar()) != '\n' && c != EOF;); // clear input buffer
        printf("\nEnter Employee %zu| name: ", i + 1);

        // removes trailing newline safely
        if (fgets(name, sizeof(name), stdin) != NULL)
            name[strcspn(name, "\n")] = '\0';

        strcpy(e[i].name, name);
        printf("Enter Employee %zu| salary: ", i + 1);
        scanf("%d", &e[i].salary);
    }
}