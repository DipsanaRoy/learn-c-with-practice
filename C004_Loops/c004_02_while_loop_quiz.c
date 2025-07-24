// C4.2. Print natural numbers from 10 to 20 when initial loop counter 'i' is initialized to 0

#include<stdio.h>

int main(){
    int i = 0; // Iterator
    while (i < 11)
    {
        printf("%d\n", i + 10);
        i++;
    }
    return 0;
}