// CP10.4. Take name and salary of 2 employees as user input and write them to a text file

#include <stdio.h>
#include <string.h>

// Struct variable employee
typedef struct employee
{
    char name[30];
    int salary;
} emp;

// Function Prototype
void inputEmp(emp e[], int n);

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
    snprintf(filename, sizeof(filename), "emp%d.txt", n);
    FILE *ptr = fopen(filename, "w"); // Open the file || W

    // Write employee details to the file
    fprintf(ptr, "'%d' employee details are:\n", n);
    for (int i = 0; i < n; i++)
    {
        fprintf(ptr, "\nEmployee %d name: %s", i + 1, e[i].name);
        fprintf(ptr, "\nEmployee %d salary: %d\n", i + 1, e[i].salary);
    }

    fclose(ptr);
    printf("\nSaved %d employee details to emp%d.txt!\n", n, n);
    return 0;
}

// Function Definition
void inputEmp(emp e[], int n)
{
    puts("\nEnter the employee details one by one!");
    for (int i = 0; i < n; i++)
    {
        for (int c; (c = getchar())!= '\n' && c != EOF; ); // clear input buffer
        printf("\nEnter Employee %d| name: ", i + 1);

        if (fgets(e[i].name, sizeof(e[i].name), stdin) != NULL)
            e[i].name[strcspn(e[i].name, "\n")] = '\0'; // remove '\n' at end

        printf("Enter Employee %d| salary: ", i + 1);
        scanf("%d", &e[i].salary);
    }
}