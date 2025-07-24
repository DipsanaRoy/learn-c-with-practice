// CP1.4. Calculate Simple Interest

#include <stdio.h>

int main()
{
    float principal, rate, time;
    printf("\nEnter the Principal amount in rupees: ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest per annum in rupees: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    printf("\nSimple Interest is RS. %.2f.\n", (principal * rate * time) / 100.0);

    return 0;
}