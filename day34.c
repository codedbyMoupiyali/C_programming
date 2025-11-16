#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[100]; 
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    int position;
    printf("Enter the position to insert (1 to %d): ", size + 1);
    scanf("%d", &position);
    if (position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    int index = position - 1;
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    size++; 
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
