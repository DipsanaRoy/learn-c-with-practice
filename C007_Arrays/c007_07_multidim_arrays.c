/* C7.7. Enter and display student subject-wise marks.

    3d, 4d and more complex arrays are possible but aren't used as such.

    3d array visualization: int marks[n_schools][n_students][n_subjects];
 */

#include <stdio.h>

int main()
{
    // Input: no. of students & subjects
    int n_stud, n_sub;

    printf("\nEnter the number of students: ");
    scanf("%d", &n_stud);

    printf("\nEnter the number of subjects: ");
    scanf("%d", &n_sub);

    int marks[n_stud][n_sub]; // store students & their marks

    // Input: marks
    for (int i = 0; i < n_stud; i++)
    {
        putchar('\n');
        for (int j = 0; j < n_sub; j++)
        {
            printf("Student %d | Subject %d | Marks: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Output
    for (int i = 0; i < n_stud; i++)
    {
        putchar('\n');
        for (int j = 0; j < n_sub; j++)
        {
            printf("Student %d | Subject %d | Marks: %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}