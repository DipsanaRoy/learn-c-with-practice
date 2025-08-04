// C3.6. Switch Case using rating

#include <stdio.h>

int main() {
    int rating;

    printf("\nEnter your rating (1-5): ");
    scanf("%d", &rating);

    puts("Your rating is:");
    switch (rating) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("%d\n", rating);
            break; // using break effectively
        default:
            puts("Invalid!");
    }

    return 0;
}