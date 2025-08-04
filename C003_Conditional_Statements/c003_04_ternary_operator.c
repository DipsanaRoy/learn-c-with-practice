// C3.7. Check if user supplied number is less than 5 using ternary operator

#include<stdio.h>

int main(){
    int num;
    
    printf("\nEnter any number: ");
    scanf("%d", &num);
    
    printf("\n%d is ", num);
    
    // Ternary operator example
    (num < 5) ? puts("less than 5") : puts("not less than 5"); // `(condition)?` → `if` and `:` → `else`

    return 0;
}