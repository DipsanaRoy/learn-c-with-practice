// CP2.
// 3 * x / y - z + r where x = 2, y = z = 3, r = 1;
// 3 * 2 / 3 - 3 + 1
// 6 / 3 - 3 + 1
// 2 - 3 + 1
// -1 + 1
// 0

#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, r = 1;
    printf("%d\n", 3 * x / y - z + r);
    return 0;
}