// CP10.1c. Here's another way of doing it:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char token[100];
    FILE *fptr = fopen("mixed_data.txt", "r");

    if (fptr == NULL)
    {
        puts("\nThe file doesn't exist!");
        return 0;
    }

    // The token pointer method:
    while (fscanf(fptr, "%s", token) == 1)
    {
        int is_num = 1;
        char *tptr = token;
        while (*tptr != '\0')
        {
            if (!isdigit(*tptr))
            {
                is_num = 0;
                break;
            }
            tptr++;
        }

        if (is_num)
        {
            int num = atoi(token); // converts alphabets to int
            printf("Found number: %d\n", num);
        }
        else printf("Found text: %s\n", token);
    }
    fclose(fptr);
    return 0;
}