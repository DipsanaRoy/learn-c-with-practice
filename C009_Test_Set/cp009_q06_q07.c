// CP9.6+7. User-defined 5 complex numbers structure & display them
#include <stdio.h>

// Structure: Complex No.
typedef struct complexNo
{
    float real; // Real part
    float img;  // Imaginary part
} complex;

int main()
{
    // I/p: 5 Complex No.s
    complex cnum[5];
    for (size_t i = 0; i < 5; i++)
    {
        printf("\nEnter Complex No.|%d|: ", i + 1);
        printf("Real part: ");
        scanf("%f", &cnum[i].real);
        printf("Imaginary part: ");
        scanf("%f", &cnum[i].img);
    }

    // O/p
    puts("\nEntered complex numbers:");
    for (size_t i = 0; i < 5; i++)
    {
        printf("Complex No. |%d|: %.3f + %.3fi\n", i + 1, cnum[i].real, cnum[i].img);
    }
    return 0;
}