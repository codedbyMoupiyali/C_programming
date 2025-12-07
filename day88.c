#include <stdio.h>

// 1. Define the Enum
// We add a special element 'COLOR_COUNT' at the end.
// RED=0, GREEN=1, BLUE=2, YELLOW=3, so COLOR_COUNT becomes 4.
typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    COLOR_COUNT // Acts as the size of the enum
} Color;

int main() {
    // 2. Define a parallel String Array
    // The order MUST match the enum definition above.
    const char *colorNames[] = {
        "RED",
        "GREEN",
        "BLUE",
        "YELLOW"
    };

    printf("Enum Name \t Integer Value\n");
    printf("------------------------------\n");

    // 3. Loop from 0 up to (but not including) COLOR_COUNT
    for (int i = 0; i < COLOR_COUNT; i++) {
        // Access the string using the array [i]
        // Access the integer value using i directly
        printf("%-10s \t %d\n", colorNames[i], i);
    }

    return 0;
}