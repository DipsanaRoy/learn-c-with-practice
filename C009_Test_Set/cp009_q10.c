// CP9.10. Write a structure capable of storing time and a function to compare 2 times (The interviewer might intentionally ask blurry questions).

#include <stdio.h>

typedef struct store_time
{
    int id;
    int hour;
    int min;
    int sec;
} time;

// Function Prototypes
void display(time t);
int compareTime(time t1, time t2);

int main()
{
    // Set & store 2 time values
    time t1 = {1, 12, 48, 14};
    time t2 = {2, 18, 47, 01};

    // Function Calls
    display(t1);
    display(t2);
    printf("\nTime comparison function returns: %d\n", compareTime(t1, t2));
    return 0;
}

// Function Definitions

// Print time
void display(time t)
{
    printf("Time %d: %d hour%s %02d minute%s %02d second%s.\n", t.id, t.hour, (t.hour > 1 ? "s" : ""), t.min, (t.min > 1 ? "s" : ""), t.sec, (t.sec > 1 ? "s" : ""));
}

int compareTime(time t1, time t2)
{
    // Hour comparison
    if (t1.hour > t2.hour)
        return 1;
    if (t1.hour < t2.hour)
        return -1;

    // Minute comparison
    if (t1.min > t2.min)
        return 1;
    if (t1.min < t2.min)
        return -1;

    // Second comparison
    if (t1.sec > t2.sec)
        return 1;
    if (t1.sec < t2.sec)
        return -1;

    return 0;
}