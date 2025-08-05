// C9.3. Store 3 employee details from user defined data using structures.

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
    // Init: Struct Variables
    struct employee e1, e2, e3;

    // I/p: e1
    printf("\nEnter Employee |1| name: ");
    scanf("%19[^\n]", e1.name); // Use %19 to limit the input to 19 characters

    printf("Enter Employee |1| code: ");
    scanf("%d", &e1.code);

    printf("Enter Employee |1| salary: ");
    scanf("%10f", &e1.salary); // Likewise limit the input to 10 characters

    for (int c = getchar(); c != '\n' && c != EOF; c = getchar()); // Clear input buffer

    // I/p: e2
    printf("\nEnter Employee |2| name: ");
    scanf("%19[^\n]", e2.name);

    printf("Enter Employee |2| code: ");
    scanf("%d", &e2.code);

    printf("Enter Employee |2| salary: ");
    scanf("%10f", &e2.salary);

    for (int c = getchar(); c != '\n' && c != EOF; c = getchar()); // Clear input buffer

    // I/p: e3
    printf("\nEnter Employee |3| name: ");
    scanf("%19[^\n]", e3.name);

    printf("Enter Employee |3| code: ");
    scanf("%d", &e3.code);

    printf("Enter Employee |3| salary: ");
    scanf("%10f", &e3.salary);

    // O/p
    puts("\n*********************************************************");
    printf("Employee |1| name: %s\n"
           "Code: %d\n"
           "Salary: %.2f\n",
           e1.name, e1.code, e1.salary);

    puts("\n*********************************************************");
    printf("Employee |2| name: %s\n"
           "Code: %d\n"
           "Salary: %.2f\n",
           e2.name, e2.code, e2.salary);

    puts("\n*********************************************************");
    printf("Employee |3| name: %s\n"
           "Code: %d\n"
           "Salary: %.2f\n",
           e3.name, e3.code, e3.salary);
    return 0;
}