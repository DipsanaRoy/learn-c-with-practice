// CP9.5. Add two complex numbers

#include <stdio.h>

// Structure: complex number
typedef struct complexNo
{
    float real; // Real part
    float img;  // Imaginary part
} complex;

// Function Prototype
complex sumComplex(complex a, complex b);

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
    printf("\nComplex No. 1: %.3f + %.3fi", a.real, a.img);
    printf("\nComplex No. 2: %.3f + %.3fi\n", b.real, b.img);
    printf("\nTheir Sum: %.3f + %.3fi\n", sum.real, sum.img);
    return 0;
}

// Function Definition
complex sumComplex(complex a, complex b)
{
    complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return sum;
}