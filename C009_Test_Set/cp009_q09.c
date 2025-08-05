// CP9.9. Structure capable of storing date to compare them.

#include <stdio.h>
#include <string.h>

// Structure to store dates
typedef struct storeDates
{
    int day;
    int month;
    int year;
} date;

// Function Prototype
int isEarlier(date a, date b), posInt_init(), isLeapYear(int year), daysInMonth(int year, int month);
void compareDates(date d[], size_t n);

int main()
{
    // I/p: No. of dates
    printf("\nHow many dates you wish to enter (Min: 2)?: ");
    size_t n = posInt_init();
    if (n < 2)
    {
        puts("Auto-corrected to 2 :)");
        n = 2;
    }

    // I/p: date array
    date d[n];
    for (size_t i = 0; i < n; i++)
    {
        int year, month, day;
        printf("\nEnter date %d:\n", i + 1);

        // I/p: year
        printf("Enter year: ");
        year = posInt_init();

        // I/p: month
        do
        {
            printf("Enter month (01-12): ");
            month = posInt_init();
        } while (month < 1 || month > 12);

        // I/p: day
        int DIM = daysInMonth(year, month);
        printf("Enter day (1-%d): ", DIM);
        if ((day = posInt_init()) < 1)
        {
            day = 1;
            puts("\nDays auto-corrected to: 1");
        }
        else if (day > DIM)
        {
            day = DIM;
            printf("\nDays auto-corrected to: %d\n", DIM);
        }

        // Set Values
        d[i].year = year;
        d[i].month = month;
        d[i].day = day;
    }
    compareDates(d, n); // Compare Dates
    return 0;
}

// Function Definitions

int posInt_init()
{
    int n;
    while (scanf("%d", &n) != 1)
    {
        puts("Please enter a valid numeric value!");
        for (int c = getchar(); c != '\n' && c != EOF; c = getchar())
            ;
    }
    if (n < 0)
    {
        n = -n;
        printf("Value auto-corrected to: %d\n", n);
    }
    return n;
}

int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}

int daysInMonth(int year, int month)
{
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // assumes months are 1-indexed
    if (month == 2 && isLeapYear(year))
    {
        return 29;
    }
    return days[month];
}

int isEarlier(date a, date b)
{
    if (a.year < b.year)
        return 1;
    if (a.year > b.year)
        return 0;

    if (a.month < b.month)
        return 1;
    if (a.month > b.month)
        return 0;

    if (a.day < b.day)
        return 1;
    if (a.day > b.day)
        return 0;

    return -1; // for equal dates
}

// Display earliest and latest dates
void compareDates(date d[], size_t n)
{
    date earliest, latest;
    earliest = latest = d[0];

    for (size_t i = 1; i < n; i++)
    {
        if (isEarlier(d[i], earliest))
            earliest = d[i];
        else if (isEarlier(d[i], latest) == 0)
            latest = d[i];
    }

    printf("\nEarliest date found: %02d/%02d/%04d", earliest.day, earliest.month, earliest.year);
    printf("\nLatest date found: %02d/%02d/%04d\n", latest.day, latest.month, latest.year);
}