#include <stdio.h>

// 1. Define the Enum with an explicit start value
enum Level {
    LOW = 10,   // Explicitly assigned 10
    MEDIUM,     // Automatically becomes 11
    HIGH,       // Automatically becomes 12
    CRITICAL    // Automatically becomes 13
};

int main() {
    // 2. Declare enum variables (optional, can use constants directly)
    enum Level l1 = LOW;
    enum Level l2 = MEDIUM;
    enum Level l3 = HIGH;
    enum Level l4 = CRITICAL;

    printf("--- Enum Values with Explicit Start ---\n");

    // 3. Print the integer values
    printf("LOW      : %d\n", l1);
    printf("MEDIUM   : %d\n", l2);
    printf("HIGH     : %d\n", l3);
    printf("CRITICAL : %d\n", l4);

    return 0;
}