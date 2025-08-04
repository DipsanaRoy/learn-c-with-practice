// C7.2. Arrays can be initialized in many ways...

#include <stdio.h>

int main()
{
       int cgpa[] = {9, 8, 8}; // int array
       // arr index: 0, 1, 2

       printf("\ncgpa[0] = %d"
              "\ncgpa[1] = %d"
              "\ncgpa[2] = %d\n",
              cgpa[0], cgpa[1], cgpa[2]);

       float CGPA[3] = {9.63, 8.12, 8.2}; // float array
       // array index:    0,    1,   2

       printf("\nCGPA[0] = %.2f"
              "\nCGPA[1] = %.2f"
              "\nCGPA[2] = %.2f\n",
              CGPA[0], CGPA[1], CGPA[2]);

       char grade[] = {'A', 'B', 'C'}; // char array
       // array index:  0,   1,   2

       printf("\ngrade[0] = %c"
              "\ngrade[1] = %c"
              "\ngrade[2] = %c\n",
              grade[0], grade[1], grade[2]);

       return 0;
}