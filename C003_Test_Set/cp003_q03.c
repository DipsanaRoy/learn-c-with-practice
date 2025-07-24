// CP3.3. Program regarding taxation

#include <stdio.h>

int main()
{
    float income, tax = 0;

    printf("\nEnter income in rupees: ");
    scanf("%f", &income);

    if (income >= 250000)
        tax = 0.05 * income;

    if (income >= 500000)
        tax += 0.2 * (income - 500000);

    if (income >= 1000000)
        tax += 0.3 * (income - 1000000);

    printf("Income tax to be paid by the 26th of this month is Rs. %f\n", tax);
    return 0;
}