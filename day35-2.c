#include <stdio.h>

void rotateRight(int arr[], int size, int k) {
    k = k % size; 
    if (k == 0) return;  
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
   
    for (int i = 0; i < k / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[k - 1 - i];
        arr[k - 1 - i] = temp;
    }
    
    for (int i = 0; i < (size - k) / 2; i++) {
        int temp = arr[k + i];
        arr[k + i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);
    
    rotateRight(arr, size, k);
    
    printf("Array after rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
