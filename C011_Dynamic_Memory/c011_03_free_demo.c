// C11.3. Notice memory fluctuation: Open task manager -> use search to look for cp011_03_free_demo.exe

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (size_t i = 0; i < 5000; i++)
    {
        int *ptr = (int *)malloc(600000 * sizeof(int)); // demo pointer
        ptr[i] = i;
        printf("\n%zu", i);
        // free(ptr); // Use it with free and without free to see the difference
    }
    puts("\nPress enter to end the program");
    getchar();
    return 0;
}