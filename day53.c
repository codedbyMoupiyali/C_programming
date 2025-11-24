#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    long long total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }
    
    long long left = 0;
    for(int i = 0; i < n; i++) {
        if(left == total - left - arr[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += arr[i];
    }
    
    printf("-1\n");
    return 0;
}
