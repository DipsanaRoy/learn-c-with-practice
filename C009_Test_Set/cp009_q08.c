// CP9.8. Represent a back account of a customer and display it.

#include <stdio.h>
#include <string.h>

// Bank account structure
typedef struct bankAcc
{
    char name[40]; // Bank account name
    int year;      // Bank account creation year
    long number;   // Bank account number
    float money;   // Money present in the bank account
} bAcc;

// Function Prototype
bAcc display(size_t i, bAcc acc);
void clearBuffer();

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
        clearBuffer();
        char name[sizeof(acc[i].name) / sizeof(acc[i].name[0])];
        printf("\n%d. Enter account holder's name: ", i + 1);
        fgets(name, sizeof(name), stdin);

        // Block Scope: variables used here can't be used outside it's scope
        {
            // Remove '\n' if present
            size_t index = strcspn(name, "\n");
            if (index == strlen(name))
                clearBuffer();
            else
                name[index] = '\0';
        }
        strcpy(acc[i].name, name); // Set account name

        printf("Enter account creation year: ");
        scanf("%d", &acc[i].year);

        printf("Enter bank account number: ");
        scanf("%ld", &acc[i].number);

        printf("Enter money present in the account: ");
        scanf("%f", &acc[i].money);
    }

    // O/p
    puts("\nThe Bank accounts present:");
    for (size_t i = 0; i < n; i++)
    {
        display(i, acc[i]);
    }
    return 0;
}

// Function Description
bAcc display(size_t i, bAcc acc)
{
    puts("\n****************************************************");
    printf("%zu. Bank account holder's name: %s\n"
           "Account creation year: %d\n"
           "Account holder's number: %ld\n"
           "Money present in the account: Rs. %.2f/-\n",
           i + 1, acc.name, acc.year, acc.number, acc.money);
}

void clearBuffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}