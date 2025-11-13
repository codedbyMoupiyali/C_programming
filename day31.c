#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);  
    
    int target = 30;  
    
    int found = 0;  
    int index = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            index = i;
            break;  // Exit loop once found
        }
    }
    if (found) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}
