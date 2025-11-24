#include <stdio.h>

// 1. Define the Enum
enum Status {
    SUCCESS, // Defaults to 0
    FAILURE, // Defaults to 1
    TIMEOUT  // Defaults to 2
};

int main() {
    enum Status currentStatus;

    printf("--- System Status Check ---\n");

    // 2. Simulate all 3 states using a loop
    for (int i = SUCCESS; i <= TIMEOUT; i++) {
        currentStatus = i; 

        printf("Status Code %d: ", currentStatus);

        // 3. Print message based on enum value
        switch (currentStatus) {
            case SUCCESS:
                printf("Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("Error: The operation failed. Please try again.\n");
                break;
            case TIMEOUT:
                printf("Warning: The server timed out. Check connection.\n");
                break;
            default:
                printf("Unknown Status.\n");
        }
    }

    return 0;
}