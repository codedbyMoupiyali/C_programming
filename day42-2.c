#include <stdio.h>

// Function to convert a lowercase string to uppercase without using built-in functions
// Assumes ASCII encoding: lowercase 'a'-'z' (97-122) become 'A'-'Z' (65-90)
void toUpperCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Subtract 32 to convert to uppercase
        }
        i++;
    }
}

int main() {
    // Example string (must be modifiable, e.g., array, not string literal)
    char str[] = "hello, world! this is a test.";
    
    printf("Original string: %s\n", str);
    
    toUpperCase(str);
    
    printf("Uppercase string: %s\n", str);
    
    return 0;
}
