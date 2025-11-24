#include <stdio.h>

int main() {
    FILE *filePointer;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    // 1. Open the file
    filePointer = fopen("numbers.txt", "r");

    // Check if file exists
    if (filePointer == NULL) {
        printf("Error: Could not open 'numbers.txt'. Make sure the file exists.\n");
        return 1;
    }

    printf("Reading numbers from file...\n");

    // 2. Read integers one by one using fscanf
    // fscanf returns the number of items successfully read. 
    // We expect 1 item per iteration.
    while (fscanf(filePointer, "%d", &num) == 1) {
        sum += num;   // Add to total
        count++;      // Increment counter
    }

    // 3. Calculate and Print Results
    if (count > 0) {
        // Typecast sum to float to preserve decimal points in average
        average = (float)sum / count;

        printf("\n--- Results ---\n");
        printf("Count   : %d\n", count);
        printf("Sum     : %d\n", sum);
        printf("Average : %.2f\n", average);
    } else {
        printf("The file was empty or contained no valid integers.\n");
    }

    // 4. Close the file
    fclose(filePointer);

    return 0;
}