#include <stdio.h>

// 1. Define the Enumeration
enum Day {
    SUNDAY,    // defaults to 0
    MONDAY,    // defaults to 1
    TUESDAY,   // defaults to 2
    WEDNESDAY, // defaults to 3
    THURSDAY,  // defaults to 4
    FRIDAY,    // defaults to 5
    SATURDAY   // defaults to 6
};

int main() {
    // 2. Create a string array to help print the names
    // The index of the array matches the integer value of the enum
    const char *dayNames[] = {
        "SUNDAY", 
        "MONDAY", 
        "TUESDAY", 
        "WEDNESDAY", 
        "THURSDAY", 
        "FRIDAY", 
        "SATURDAY"
    };

    int i;

    printf("Day Name \t Integer Value\n");
    printf("------------------------------\n");

    // 3. Iterate from 0 (SUNDAY) to 6 (SATURDAY)
    for (i = SUNDAY; i <= SATURDAY; i++) {
        // Print the string from the array and the integer value of the enum
        printf("%-10s \t %d\n", dayNames[i], i);
    }

    return 0;
}