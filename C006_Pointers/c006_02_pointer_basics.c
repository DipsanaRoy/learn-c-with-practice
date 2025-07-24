// C6.2. Remember: 
// 1. Pointers stores address.
// 2. `*` → Value at (dereferencing)
// 3. `&` → Address of (reference)

#include <stdio.h>

int main()
{
    // variable: i; pointers: j, k;
    int i = 34;

    int *j = &i;  // j stores the address of i (pointer to int)
    int **k = &j; // k stores the address of j (pointer to pointer)

    // You can go deeper: ***l, ****m, etc., forming multi-level pointers

    // ---------------- Values ----------------
    puts("\n[VALUES]");
    printf("i     = %d\n", i);   // Direct value of i
    printf("*j    = %d\n", *j);  // Value at address j (i)
    printf("**k   = %d\n", **k); // Value at address stored in j (i)

    // --------------- Standard Addresses (Hex) ---------------
    puts("\n[ADDRESSES - Standard Hexadecimal Format (%p)]");
    printf("&i     = %p\n", (void *)&i);    // Address of i
    printf("j      = %p\n", (void *)j);     // j stores address of i
    printf("&j     = %p\n", (void *)&j);    // Address of j
    printf("k      = %p\n", (void *)k);     // k stores address of j
    printf("&k     = %p\n", (void *)&k);    // Address of k
    printf("*(&k)  = %p\n", (void *)*(&k)); // Same as k

    // (void*) → Safely casts pointer for %p format to avoid warnings.

    // ------------- Unreliable Addresses (Decimal) -------------
    puts("\n[ADDRESSES - Optional Decimal Format (%u)]");
    printf("&i     = %u\n", (unsigned)&i);
    printf("j      = %u\n", (unsigned)j);
    printf("&j     = %u\n", (unsigned)&j);
    printf("k      = %u\n", (unsigned)k);
    printf("&k     = %u\n", (unsigned)&k);

    // unsigned → converts addresses to positive values.

    return 0;
}