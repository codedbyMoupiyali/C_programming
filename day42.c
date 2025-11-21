#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count vowels and consonants in a string
// Vowels: A, E, I, O, U (case-insensitive)
// Consonants: All alphabetic characters that are not vowels
// Ignores non-alphabetic characters
void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);  // Convert to lowercase for case-insensitivity
        if (isalpha(ch)) {  // Check if alphabetic
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

int main() {
    // Example string
    char str[] = "Hello, World! This is a test string.";
    
    int vowels, consonants;
    
    countVowelsConsonants(str, &vowels, &consonants);
    
    printf("Input string: %s\n", str);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    
    return 0;
}
