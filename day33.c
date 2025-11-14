#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;  // Found at index mid
        } else if (arr[mid] < target) {
            low = mid + 1;  // Search in right half
        } else {
            high = mid - 1;  // Search in left half
        }
    }
    
    return -1;  // Not found
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}
