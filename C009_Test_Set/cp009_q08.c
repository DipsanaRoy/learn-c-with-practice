// CP9.8. Represent a back account of a customer and display it.

#include <stdio.h>
#include <string.h>

// Bank account structure
typedef struct bankAcc
{
    char name[40]; // Bank account name
    int year;      // Bank account creation year
    int number;    // Bank account number
    float money;   // Money present in the bank account
} bAcc;

// Function Prototype
bAcc display(int i, bAcc acc);

int main()
{
    // I/p: no. of bank acc
    size_t n; // store bank accounts no.s
    printf("\nHow many bank accounts you want to enter?: ");
    scanf("%zu", &n);

    bAcc acc[n]; // Declare: acc numbers

    // I/p: bank acc
    for (size_t i = 0; i < n; i++)
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF); // Clear buffer

        printf("\n%d. Enter account holder's name: ", i + 1);
        fgets(acc[i].name, sizeof(acc[i].name), stdin);
        acc[i].name[strcspn(acc[i].name, "\n")] = '\0'; // Remove '\n' if present

        printf("Enter account creation year: ");
        scanf("%d", &acc[i].year);

        printf("Enter bank account number: ");
        scanf("%d", &acc[i].number);

        printf("Enter money present in the account: ");
        scanf("%f", &acc[i].money);
    }

    // O/p
    puts("\n****************************************************"
         "\nThe Bank accounts present:");
    for (size_t i = 0; i < n; i++)
    {
        display(i, acc[i]);
    }
    return 0;
}

// Function Description
bAcc display(int i, bAcc acc)
{
    puts("\n****************************************************");
    printf("%d. Bank account holder's name: %s\n", i + 1, acc.name);
    printf("Account creation year: %d\n", acc.year);
    printf("Account holder's number: %d\n", acc.number);
    printf("Money present in the account: Rs. %.2f/-\n", acc.money);
}