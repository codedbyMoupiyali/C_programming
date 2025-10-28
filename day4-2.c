#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    return 0;
}
