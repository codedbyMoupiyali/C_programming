#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    int ch; // We use 'int' because fgetc returns EOF which is -1

    // 1. Get Source Filename
    printf("Enter source file name: ");
    scanf("%s", sourceName);

    // 2. Open Source File
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file '%s'. Check if it exists.\n", sourceName);
        exit(1); // Terminate program with error
    }

    // 3. Get Destination Filename
    printf("Enter destination file name: ");
    scanf("%s", destName);

    // 4. Open Destination File
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file '%s'.\n", destName);
        fclose(sourceFile); // Close source before exiting
        exit(1);
    }

    // 5. Copy Cycle
    printf("Copying file...\n");

    // Read from source until End of File (EOF)
    while ((ch = fgetc(sourceFile)) != EOF) {
        // Write to destination
        fputc(ch, destFile);
    }

    // 6. Close both files
    printf("File copied successfully from %s to %s.\n", sourceName, destName);
    
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}