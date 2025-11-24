#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int next_greater = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        printf("%d", next_greater);
        if(i < n - 1) {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
