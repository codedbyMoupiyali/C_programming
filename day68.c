#include <stdio.h>

int main() {
    int n;

    // 1. Input the size of the array
    // Note: The array has size n, but contains numbers from 0 to n (n+1 possibilities)
    // so one is definitely missing.
    printf("Enter the size of the array (n): ");
    if (scanf("%d", &n) != 1) return 1;

    int temp;
    int actual_sum = 0;
    
    // 2. Input elements and calculate Actual Sum simultaneously
    // We don't even need to store the array, we just need the sum.
    printf("Enter %d integers (between 0 and %d): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        actual_sum += temp;
    }

    // 3. Calculate Expected Sum
    // Formula for sum of 0 to n is: n * (n + 1) / 2
    int expected_sum = n * (n + 1) / 2;

    // 4. The difference is the missing number
    int missing_number = expected_sum - actual_sum;

    printf("The missing number is: %d\n", missing_number);

    return 0;
}