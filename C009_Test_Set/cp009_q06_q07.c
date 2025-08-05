// CP9.6+7. User-defined 5 complex numbers structure & display them

#include <stdio.h>
#include <math.h>

// Structure: Complex No.
typedef struct complexNo
{
    float real; // Real part
    float img;  // Imaginary part
} complex;

int main()
{
    // I/p: 5 Complex No.s
    complex c_num[5];
    for (size_t i = 0; i < 5; i++)
    {
        printf("\nEnter Complex No. %d\nReal part: ", i + 1);
        scanf("%f", &c_num[i].real);
        printf("Imaginary part: ");
        scanf("%f", &c_num[i].img);
    }

    // O/p
    puts("\nEntered complex numbers:");
    for (size_t i = 0; i < 5; i++)
    {
        printf("Complex No. |%d|: %.3f %s %.3fi\n", i + 1, c_num[i].real, c_num[i].img < 0 ? "-" : "+", fabsf(c_num[i].img));
    }
    return 0;
}