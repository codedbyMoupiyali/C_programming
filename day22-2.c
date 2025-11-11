#include <stdio.h>
int main() {
    int n, k;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of terms should be positive.\n");
        return 1;
    }
    for (k = 1; k <= n; k++) {
        sum += (2.0 * k - 1.0) / (2.0 * k);
    }
    
    printf("Sum of the series up to %d terms: %.6f\n", n, sum);
    
    return 0;
}
