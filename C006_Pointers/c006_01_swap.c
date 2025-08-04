// C6.1. Swap two numbers

#include <stdio.h>

void main()
{
	int a, b, c;
	puts("\nEnter any two numbers a and b respectively");
	scanf("%d %d", &a, &b);

	// Method 1 -> Recommended (Portable and Lightest)
	c = a;
	a = b;
	b = c;
	printf("\nAfter Swapping, a = %d and b = %d\n", a, b);

	// Method 2
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter Swapping again, a = %d and b = %d\n", a, b);

	// Method 3 -> Recommended
	(a ^= b), (b ^= a), (a ^= b);
	printf("\nAfter Swapping again, a = %d and b = %d\n", a, b);

	// Method 4 -> ⚠️
	a += b -= a = b - a;
	printf("\nAfter Swapping again, a = %d and b = %d\n", a, b);

	// Method 5 -> ⚠️
	a += b - (b = a);
	printf("\nAfter Swapping again, a = %d and b = %d\n", a, b);

	// Method 6 -> ⚠️
	b += a - (a = b);
	printf("\nAfter Swapping again, a = %d and b = %d\n", a, b);
}