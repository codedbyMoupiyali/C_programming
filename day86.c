#include <stdio.h>

// 1. Define Enum for Menu Choices
// Start at 1 to match user input friendliness
enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    float num1, num2, result;

    // 2. Display Menu
    printf("--- Calculator Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Validating input range before asking for numbers
    if (choice >= 1 && choice <= 3) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }

    // 3. Switch Case using Enum Constants
    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        default:
            // Handles any number other than 1, 2, or 3
            printf("Error: Invalid choice selected.\n");
    }

    return 0;
}