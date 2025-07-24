// C3.5. Explaining Switch Case by rating

#include <stdio.h>

int main()
{
    int rating;

    printf("\nEnter your rating (1-5): ");
    scanf("%d", &rating);

    puts("Your rating is ");
    switch (rating) // imports rating as comparator
    {
    case 1:         // Think of `if (comparator, i.e. rating here == 1)` and so on for other cases
        puts("1");
        break;      // exits switch case
    case 2:
        puts("2");
        break;
    case 3:
        puts("3");
        break;
    case 4:
        puts("4");
        break;
    case 5:
        puts("5");
        break;

    default: // like else
        puts("invalid!");
        break;
    }

    return 0;
}