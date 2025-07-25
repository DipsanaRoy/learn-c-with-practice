// C11.3. Notice memory fluctuation: Open task manager -> use search to look for cp11_free_demo.exe

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (size_t i = 0; i < 5000; i++)
    {
        int *ptr = (int *)malloc(600000 * sizeof(int)); // demo pointer
        ptr[i] = i;
        printf("\n%d", i);
        // free(ptr); // Use it with free and without free to see the difference
    }
    puts("\nPress any key to continue");
    getchar();
    return 0;
}