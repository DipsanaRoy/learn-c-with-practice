// CP9.5. Add two complex numbers

#include <stdio.h>
#include <math.h>

// Structure: complex number
typedef struct complexNo
{
    float real; // Real part
    float img;  // Imaginary part
} complex;

// Function Prototypes
complex sumComplex(complex a, complex b);
void printComplex(char *str, complex c);

int main()
{
    // Init & I/p: complex a, b
    complex a, b;

    puts("\nEnter Complex No. 1");
    printf("Real part: ");
    scanf("%f", &a.real);
    printf("Imaginary part: ");
    scanf("%f", &a.img);

    puts("\nEnter Complex No. 2");
    printf("Real part: ");
    scanf("%f", &b.real);
    printf("Imaginary part: ");
    scanf("%f", &b.img);

    complex sum = sumComplex(b, a); // Function Call

    // O/p
    printComplex("\nComplex No. 1: ", a);
    printComplex("Complex No. 2: ", b);
    printComplex("Their Sum: ", sum);
    return 0;
}

// Function Definitions

complex sumComplex(complex a, complex b)
{
    complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return sum;
}

void printComplex(char *str, complex c)
{
    printf("%s%.3f %s %.3fi\n", str, c.real, c.img < 0 ? "-" : "+", fabsf(c.img)); // fabsf() → for absolute float value (positive values)
}