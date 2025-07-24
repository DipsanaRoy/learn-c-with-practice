// C2.2. Check `int` and `long` range using macros

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of long: %ld to %ld\n", LONG_MIN, LONG_MAX);

    // Example of `long long` and `long double`
    long long bigNum = 9223372036854775807LL;  // Note the 'LL'
    long double preciseNum = 3.141592653589793238L;

    printf("Big number: %lld\n", bigNum);
    printf("Precise number: %.18Lf\n", preciseNum); // Upto 18 decimal places

    return 0;
}