#include <stdio.h>

// Define an enum with a mix of default and explicit values
enum Item {
    BOOK,       // Default: Starts at 0
    PEN,        // Default: Becomes 1
    RULER = 50, // Explicitly set to integer 50
    ERASER      // Auto-increments from previous: Becomes 51
};

int main() {
    enum Item i1 = BOOK;
    enum Item i2 = PEN;
    enum Item i3 = RULER;
    enum Item i4 = ERASER;

    printf("--- Proof that Enums are Integers ---\n");
    
    // 1. Printing variables using %d
    printf("Value of BOOK   : %d\n", i1);
    printf("Value of PEN    : %d\n", i2);
    printf("Value of RULER  : %d\n", i3);
    printf("Value of ERASER : %d\n", i4);

    // 2. Performing Math on Enums
    // Since they are integers, we can add them!
    int total = i2 + i3; // 1 + 50
    printf("\nMath Check (PEN + RULER): %d\n", total);

    // 3. Size Check
    // It usually prints 4 bytes (size of a standard int)
    printf("Memory size of enum variable: %lu bytes\n", sizeof(i1));

    return 0;
}