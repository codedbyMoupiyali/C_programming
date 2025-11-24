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
        int found = 0;
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("0");
        }
        if(i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
