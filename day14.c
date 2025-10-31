#include <stdio.h>

int main() {
    int n, sum = 0, i;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    
    printf("Sum of the first %d odd numbers: %d\n", n, sum);
    
    return 0;
}
