#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Required for toupper()

int main() {
    FILE *sourceFile, *destFile;
    int ch; // int is used to handle EOF correctly

    // 1. Open source file in Read mode
    sourceFile = fopen("input.txt", "r");
    
    // Check if input file exists
    if (sourceFile == NULL) {
        printf("Error: Could not open 'input.txt'. Please create the file first.\n");
        return 1;
    }

    // 2. Open destination file in Write mode
    destFile = fopen("output.txt", "w");
    
    if (destFile == NULL) {
        printf("Error: Could not create 'output.txt'.\n");
        fclose(sourceFile); // Clean up before exiting
        return 1;
    }

    printf("Processing file...\n");

    // 3. Read, Convert, and Write loop
    while ((ch = fgetc(sourceFile)) != EOF) {
        // toupper() converts lowercase to uppercase
        // It leaves numbers, symbols, and existing uppercase letters alone.
        fputc(toupper(ch), destFile);
    }

    printf("Success! Text converted to uppercase in 'output.txt'.\n");

    // 4. Close files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}