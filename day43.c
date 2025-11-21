#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        // Move pointers towards the center
        start++;
        end--;
    }
}

int main() {
    // Example string (must be modifiable, e.g., array, not string literal)
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
