// CP10.1b. Here's another way of doing it, the hard way:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // You can use isalpha and isdigit functions from here

int main()
{
    char token[100]; // Assume token (each string) is less than 101 characters

    FILE *fptr = fopen("mixed_data.txt", "r"); // Open file by R

    if (fptr == NULL)
    {
        puts("\nThe file doesn't exist!");
    }
    else
    {
        while (fscanf(fptr, "%s", token) == 1)
        {
            // Check if the token is a number
            int is_num = 1;
            for (size_t i = 0; token[i] != '\0'; i++)
            {
                if (!isdigit(token[i])) // isdigit returns 1 if String digit is found
                {
                    is_num = 0;
                    break;
                }
            }

            if (is_num)
            {
                int num = atoi(token); // atoi [alphabets to integer] converts int-strings to integer, it returns 0 if it fails
                printf("Found number: %d\n", num);
            }
            else
            {
                // If token is not a number, you can handle it as text
                printf("Found text: %s\n", token);
            }
        }
        fclose(fptr);
    }
    return 0;
}