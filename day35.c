#include <stdio.h>
#include <limits.h> 
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if (size < 2) {
        printf("Array must have at least 2 elements to find the second largest.\n");
        return 1;
    }
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == INT_MIN) {
        printf("All elements are the same; no distinct second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
    
    return 0;
}
