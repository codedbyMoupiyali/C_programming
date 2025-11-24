#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    if (result != -1 && arr[result] >= x) {
        printf("%d\n", result);
    } else {
        printf("-1\n");
    }
    return 0;
}
