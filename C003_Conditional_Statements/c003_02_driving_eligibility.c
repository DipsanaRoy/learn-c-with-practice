// C3.2. Check driving eligibility!

#include <stdio.h>

int main()
{
    int age, vipPass = 0;

    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("Enter 1 if you own a VIP pass otherwise enter 0: ");
    scanf("%d", &vipPass);

    printf("\nYou can"); 
    if ((age <= 80 && age >= 18) || !(vipPass == 0))
    {
        puts(" drive");
        return 0; // stops main execution
    }
    puts("not drive");

    return 0;
}