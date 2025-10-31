#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    printf("Enter two integers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &num1, &num2, &op);
    
    switch (op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Result: %d\n", num1 % num2);
            } else {
                printf("Error: Modulo by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    
    return 0;
}
