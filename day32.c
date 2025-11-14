#include <stdio.h>

int main() {
    
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);  
    int n2 = sizeof(arr2) / sizeof(arr2[0]);  
    int n = n1 + n2;
    
    int merged[n]; 

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    
    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
