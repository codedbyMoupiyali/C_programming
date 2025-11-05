#include <stdio.h>
int main() {
    int num, digit;
    long long product = 1;  
    int hasOddDigit = 0;  
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        printf("Product of odd digits: 1\n");
        return 0;
    }
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = 1;
        }
        num /= 10;
    }
    printf("Product of odd digits: %lld\n", product);
    
    return 0;
}
