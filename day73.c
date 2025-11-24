#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Required for isspace()

int main() {
    FILE *filePointer;
    char filename[100];
    char ch;
    
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0; // Flag: 0 means we are in whitespace, 1 means we are in a word

    // 1. Get filename from user
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    // 2. Open file in Read mode
    filePointer = fopen(filename, "r");

    // Check if file exists
    if (filePointer == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    // 3. Read character by character
    while ((ch = fgetc(filePointer)) != EOF) {
        
        // --- Count Characters ---
        characters++;

        // --- Count Lines ---
        if (ch == '\n') {
            lines++;
        }

        // --- Count Words ---
        // isspace() checks for ' ', '\t', '\n', '\v', '\f', '\r'
        if (isspace(ch)) {
            inWord = 0; // We are in whitespace
        } else {
            // If we were not in a word previously, we just started a new one
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        }
    }

    if (characters 