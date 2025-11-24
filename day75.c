#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePointer;
    char filename[100];
    char newText[1000];

    // 1. Get the filename
    printf("Enter the filename to open (e.g., notes.txt): ");
    scanf("%s", filename);

    // CRITICAL STEP: Clear the input buffer
    // scanf leaves the 'Enter' key (\n) in the buffer. 
    // If we don't clear it, the next fgets will read that empty line and stop.
    while (getchar() != '\n'); 

    // 2. Open file in APPEND mode ("a")
    filePointer = fopen(filename, "a");

    if (filePointer == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // 3. Get the new line of text from the user
    printf("Enter the text to append: ");
    fgets(newText, sizeof(newText), stdin);

    // 4. Append the text to the file
    // We add a newline check or explicit newline if you want each append on a new line.
    fprintf(filePointer, "%s", newText);

    // 5. Close the file
    fclose(filePointer);

    printf("Successfully appended text to %s.\n", filename);

    return 0;
}