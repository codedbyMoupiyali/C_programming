#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if (size <= 0) {
        printf("Array size must be positive!\n");
        return 1;
    }
    
    int arr[100];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int position;
    printf("Enter the position to delete (1 to %d): ", size);
    scanf("%d", &position);
    if (position < 1 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }
    int index = position - 1;
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    size--;  // Decrease the size
    
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
