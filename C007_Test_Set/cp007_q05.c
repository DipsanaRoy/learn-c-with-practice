// CP7.5. Create a function to reverse an array.

#include <stdio.h>

// Function Prototypes
void reverse(size_t size, int *ptr), int_init(int *ptr);

int main()
{
    int arr[200], input;

    printf("\nHow many elements you want to enter?: ");
    int_init(&input);
    if (input < 0) input = -input;
    size_t size = (size_t)input;

    puts("\nStart entering the elements one by one:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element |%3d|: ", i + 1);
        int_init(&arr[i]);
    }

    puts("\nArray before reversing:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%3d|: %d\n", i + 1, arr[i]);
    }

    reverse(size, arr);

    puts("\nArray after reversing:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%-3d|: %d\n", i + 1, arr[i]);
    }
    return 0;
}

// Function Definitions:

// Validates integer input
void int_init(int *ptr)
{
    while (scanf("%d", ptr) != 1)
    {
        printf("Please enter a valid integer: ");
        while (getchar() != '\n'); // Clear input buffer
    }
}

// Reverses the array
void reverse(size_t size, int *ptr)
{
    size--;
    for (size_t i = 0; i < (size + 1) / 2; i++)
    {
        int last = size - i, temp = ptr[i]; // assignment is lighter than arithmetic operations
        ptr[i] = ptr[last];
        ptr[last] = temp;
    }
}
