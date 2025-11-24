#include <stdio.h>
#include <ctype.h> // Required for toupper(), tolower(), isspace()

int main() {
    FILE *inputFile, *outputFile;
    char ch;
    int capitalizeNext = 1; // Flag: 1 means the next letter should be Upper, 0 means Lower

    // 1. Open the input file in Read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open 'input.txt'. Please create this file first.\n");
        return 1;
    }

    // 2. Open the output file in Write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create 'output.txt'.\n");
        fclose(inputFile); // Close input before exiting
        return 1;
    }

    printf("Reading from input.txt...\n");

    // 3. Process the file character by character
    while ((ch = fgetc(inputFile)) != EOF) {
        
        if (ch == '.' || ch == '?' || ch == '!') {
            // Case A: Sentence terminator found
            fputc(ch, outputFile);
            capitalizeNext = 1; // The next alphanumeric char must be capitalized
        } 
        else if (isspace(ch)) {
            // Case B: Whitespace (space, newline, tab)
            // Just print it, do not change the capitalization state
            fputc(ch, outputFile);
        } 
        else {
            // Case C: Regular character (letters, numbers, other punctuation)
            if (capitalizeNext) {
                fputc(toupper(ch), outputFile);
                capitalizeNext = 0; // We have capitalized the start, reset flag
            } else {
                fputc(tolower(ch), outputFile);
            }
        }
    }

    printf("Success! Processed text written to 'output.txt'.\n");

    // 4. Close the files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}