// CP6.4. Use a function to calculate the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

// Function Prototype
void sumAverage(int a, int b, int *sum, float *avg);

int main()
{
    int num1, num2, sum;
    float avg;

    puts("\nEnter any two numbers one by one");
    scanf("%d%d", &num1, &num2);

    sumAverage(num1, num2, &sum, &avg); // Function Call

    printf("\nSum of %d and %d is %d and their average is %.2f\n", num1, num2, sum, avg);

    return 0;
}

// A GOOD INTERVIEW QUESTION: Can void function return values?
// void function can indirectly return values by using pointers but can't return values by return statements;

// Function Definition
void sumAverage(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}