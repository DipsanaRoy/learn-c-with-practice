// C10.6. Quick Quiz
#include <stdio.h>
#include <errno.h>

int main()
{
    // Init: 2 Numbers
    int num1, num2;
    FILE *ptr = fopen("Harr5y.txt", "r"); // Open file in Read Mode

    if (ptr == NULL)
    {
        perror("This file does not exist.");
        return -1;
    }
    else
    {
        // Set int values from file
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);

        fclose(ptr);

        printf("\nnum 1: %d"
               "\nnum 2: %d\n",
               num1, num2);
    }
    return 0;
}