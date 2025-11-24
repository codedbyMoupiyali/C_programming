#include <stdio.h>

int main() {
    int m, n;

    // 1. Input size and elements for first array
    printf("Enter size of first array (m): ");
    if (scanf("%d", &m) != 1) return 1;

    int arr1[m];
    printf("Enter %d sorted elements for first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Input size and elements for second array
    printf("Enter size of second array (n): ");
    if (scanf("%d", &n) != 1) return 1;

    int arr2[n];
    printf("Enter %d sorted elements for second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Merge Logic
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Compare elements and add smaller one to merged array
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // 4. Handle remaining elements
    // If array 1 still has elements
    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // If array 2 still has elements
    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // 5. Print Result
    printf("Merged Array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}