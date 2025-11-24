#include <stdio.h>

int main() {
    int n, input;
    
    // We assume the numbers in the array will not exceed 100,000.
    // We initialize the array to 0 (0 means 'not seen yet').
    int visited[100001] = {0}; 

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("Enter %d elements: ", n);
    
    // We perform the check WHILE reading the input.
    // This ensures we find the duplicate in exactly one iteration 
    // without needing to store the whole input array first.
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);

        // Step 1: Check if we have seen this number before
        if (visited[input] == 1) {
            printf("Repeated element: %d\n", input);
            return 0; // Terminate immediately after finding the duplicate
        }

        // Step 2: Mark this number as seen
        visited[input] = 1;
    }

    return 0;
}