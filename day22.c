#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original_num, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("%d is not a strong number.\n", num);
        return 0;
    }
    
    original_num = num;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == original_num) {
        printf("%d is a strong number.\n", original_num);
    } else {
        printf("%d is not a strong number.\n", original_num);
    }
    
    return 0;
}
