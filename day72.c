#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *filePointer;
    char lineBuffer[255]; // Buffer to store each line read (max 255 chars)

    // 1. Open the file in Read mode
    filePointer = fopen("info.txt", "r");

    // 2. Check if file exists
    if (filePointer == NULL) {
        printf("Error: Could not open 'info.txt'. Make sure the file exists.\n");
        return 1; // Exit with error code
    }

    printf("--- Reading File Contents ---\n");

    // 3. Read line by line until EOF
    // fgets returns NULL when it hits End of File
    while (fgets(lineBuffer, sizeof(lineBuffer), filePointer) != NULL) {
        printf("%s", lineBuffer);
    }

    printf("\n--- End of File ---\n");

    // 4. Close the file
    fclose(filePointer);

    return 0;
}