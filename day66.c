#include <stdio.h>

int main() {
    int n, target;
    int found = 0; // Flag to check if solution is found

    // 1. Input the size of the array
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 1; // Error check

    int nums[n]; // Variable Length Array (supported in C99 and later)

    // 2. Input the array elements
    printf("Enter the integers (space separated): ");
    for (int k = 0; k < n; k++) {
        scanf("%d", &nums[k]);
    }

    // 3. Input the target sum
    printf("Enter target value: ");
    scanf("%d", &target);

    // 4. Find the indices
    // Outer loop picks the first number
    for (int i = 0; i < n - 1; i++) {
        // Inner loop picks the second number (starts after i to avoid duplicates)
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break; 
            }
        }
        if (found) break; 
    }

    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}