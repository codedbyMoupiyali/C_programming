#include <stdio.h>

int main() {
    FILE *filePointer;
    char name[50];
    int age;

    // 1. Open the file in 'write' mode
    filePointer = fopen("info.txt", "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    // 2. Get user input
    printf("Enter your name: ");
    scanf("%s", name); // Note: This reads a single word (no spaces)

    printf("Enter your age: ");
    scanf("%d", &age);

    // 3. Write data to the file using fprintf
    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Age: %d\n", age);

    // 4. Close the file
    fclose(filePointer);

    // 5. Display success message
    printf("Data successfully saved to info.txt\n");

    return 0;
}