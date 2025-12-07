#include <stdio.h>

// 1. Define the Enum (Start at 1 for convenience)
enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN, 
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;

    // 2. Array to map enum integers to String names
    // Index 0 is empty because our enum starts at 1
    const char *monthNames[] = {
        "", 
        "January", "February", "March", "April", "May", "June", 
        "July", "August", "September", "October", "November", "December"
    };

    printf("Month      \t Days\n");
    printf("---------------------\n");

    // 3. Iterate through the months
    for (m = JAN; m <= DEC; m++) {
        int days;

        // Determine days based on the month
        switch (m) {
            case FEB:
                days = 28; // (Ignoring leap year logic for simplicity)
                break;
            case APR:
            case JUN:
            case SEP:
            case NOV:
                days = 30;
                break;
            default:
                // All remaining months (Jan, Mar, May, Jul, Aug, Oct, Dec)
                days = 31;
                break;
        }

        // 4. Print the result
        // Special printing for February to acknowledge leap years
        if (m == FEB) {
            printf("%-10s \t 28 (29 in Leap Years)\n", monthNames[m]);
        } else {
            printf("%-10s \t %d\n", monthNames[m], days);
        }
    }

    return 0;
}