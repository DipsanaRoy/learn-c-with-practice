// CP7.5. Create a function to reverse an array.

#include <stdio.h>

// Function Prototypes
void reverse(size_t size, int *ptr), int_init(int *ptr);

int main()
{
    int arr[200], input;
    size_t size;

    printf("\nHow many elements you want to enter?: ");
    int_init(&input);
    if (input < 0) input = -input;
    size = (size_t)input;

    puts("\nStart entering the elements one by one:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element |%d|: ", i + 1);
        int_init(&arr[i]);
    }

    puts("\nArray before reversing:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%d|: %d\n", i + 1, arr[i]);
    }

    reverse(size, arr);

    puts("\nArray after reversing:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%d|: %d\n", i + 1, arr[i]);
    }
    return 0;
}

// Function Definitions:

// Validates integer input
void int_init(int *ptr)
{
    if (scanf("%d", ptr) != 1)
    {
        printf("Please enter a valid integer: ");
        while (getchar() != '\n'); // Clear input buffer
        int_init(ptr);
    }
}

// Reverses the array
void reverse(size_t size, int *ptr)
{
    int temp;
    for (size_t i = 0; i < size / 2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[size - i - 1];
        ptr[size - i - 1] = temp;
    }
}
