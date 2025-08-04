// CP3.2. Program against Question 2

#include <stdio.h>

int main()
{
    int m1, m2, m3; // marks of three subjects
    float avg;      // average of three subjects

    puts("\nEnter marks of three subjects one by one");
    scanf("%d%d%d", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3.0;

    if ((avg >= 40) && (m1 >= 33 && m2 >= 33 && m3 >= 33))
    {
        printf("Congrats, the student has passed");
    }
    else printf("The student has failed");

    printf(" with %.2f%%\n", avg); // %% output → %
    return 0;
}