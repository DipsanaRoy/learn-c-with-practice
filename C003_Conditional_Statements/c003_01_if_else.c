// C3.1. Even or odd number checker

#include<stdio.h>

int main(){
    int num;
    printf("\nEnter any number: ");
    scanf("%d", &num);
    
    printf("%d is ", num); // NOTE: using printf for puts to `avoid new line`
    if (num % 2 == 0)
    {
        puts("even");
        return 0; // stops main execution
    }

    puts("odd"); // remember puts? great for static `string outputs`

    return 0; // returns 0 if main executed successfully
}