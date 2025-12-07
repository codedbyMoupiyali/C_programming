#include <stdio.h>

// Define a structure to keep data organized
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *filePointer;
    struct Student s;
    int n, i;

    // --- PART 1: WRITE DATA ---
    filePointer = fopen("records.txt", "w");
    
    if (filePointer == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Name (single word): ");
        scanf("%s", s.name); // Note: scanf %s stops at spaces
        
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        
        printf("Marks: ");
        scanf("%f", &s.marks);

        // Write to file: Name followed by Roll followed by Marks
        fprintf(filePointer, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    // Close file after writing
    fclose(filePointer);
    printf("\nData successfully saved to 'records.txt'.\n");


    // --- PART 2: READ DATA ---
    printf("\nReading data back from file...\n");
    
    filePointer = fopen("records.txt", "r");
    
    if (filePointer == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");
    printf("Name\t\tRoll No\t\tMarks\n");
    printf("----------------------------------------\n");

    // fscanf returns the number of items read. We expect 3 items per line.
    // The loop runs until it hits the End of File (EOF).
    while (fscanf(filePointer, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("%-10s\t%d\t\t%.2f\n", s.name, s.roll, s.marks);
    }

    // Close file after reading
    fclose(filePointer);

    return 0;
}