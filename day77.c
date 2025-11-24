#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Required for isalpha() and tolower()

int main() {
    FILE *filePointer;
    char filename[100];
    int ch; // Use int for fgetc to handle EOF correctly
    int vowelCount = 0;
    int consonantCount = 0;

    // 1. Get filename
    printf("Enter the filename to analyze: ");
    scanf("%s", filename);

    // 2. Open file in Read mode
    filePointer = fopen(filename, "r");

    if (filePointer == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("Analyzing file...\n");

    // 3. Read character by character
    while ((ch = fgetc(filePointer)) != EOF) {
        
        // Convert to lowercase first to simplify checks
        // Note: We assign it to a temporary variable 'lowerCh' for checking
        int lowerCh = tolower(ch);

        // Check if it is a valid alphabet letter
        if (isalpha(lowerCh)) {
            
            // Check if it is a vowel
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
                lowerCh == 'o' || lowerCh == 'u') {
                vowelCount++;
            } 
            else {
                // If it's a letter and not a vowel, it's a consonant
                consonantCount++;
            }
        }
        // Digits, spaces, and symbols are automatically ignored here
    }

    // 4. Close file
    fclose(filePointer);

    // 5. Print results
    printf("\n--- Analysis Results ---\n");
    printf("Vowels     : %d\n", vowelCount);
    printf("Consonants : %d\n", consonantCount);

    return 0;
}