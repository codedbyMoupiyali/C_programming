#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    
    if(k > n || k <= 0) {
        printf("Invalid k\n");
        return 1;
    }
    
    // For each window of size k
    for(int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > max_val) {
                max_val = arr[j];
            }
        }
        printf("%d", max_val);
        if(i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
