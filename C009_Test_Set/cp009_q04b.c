// CP9.4b. Illustrate the use of arrow operator in C

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Structure to store student 'name' & 'marks'
typedef struct studentInfo
{
    char name[25];
    float marks;
} student;

// Function Prototype
void changeMarks(float *marks);

int main()
{
    // Init: student 1
    student s;
    student *s1 = &s;

    // I/p: Student name & marks
    printf("\nEnter student's name: ");
    fgets(s1->name, sizeof(s1->name), stdin);
    
    printf("Enter student's marks: ");
    scanf("%3f", &s1->marks);

    // Remove: '\n' from the end of name
    unsigned int end = strlen(s1->name) - 1; // unsigned int holds positive int values
    if (s1->name[end] == '\n')
        s1->name[end] = '\0';
        
    changeMarks(&s1->marks); // change marks

    // O/p
    printf("\n%s has achieved %.2f marks!\n", s1->name, s1->marks);
    return 0;
}

// Function Definition
void changeMarks(float *marks)
{
    char tag;
    // I/p: 'y' to change marks
    do {
        for (int c = getchar(); c != '\n' && c != EOF; c = getchar()); // clear input buffer
        printf("\nShould I change the student's marks? (y/n): ");
        tag = tolower(getchar());
    } while(tag != 'n' && tag != 'y');
    
    putchar('\n');
    if (tag == 'y')
    {
        float update;
        printf("Enter updated marks: ");
        scanf("%3f", &update);
        
        if(update > 0)
        {  
            *marks = update; // Update Marks
            puts("Marks changed!");
        } else puts("Invalid Input!");
    }
    else puts("Marks not changed!");
}