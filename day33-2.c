#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);
    int arr[100];
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    } 
    int element;
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    int pos = 0;
    while (pos < size && arr[pos] < element) {
        pos++;
    }
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    size++; 
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
