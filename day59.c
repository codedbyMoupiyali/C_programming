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
    
    long long current_sum = 0;
    for(int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    long long max_sum = current_sum;
    
    for(int i = k; i < n; i++) {
        current_sum -= arr[i - k];
        current_sum += arr[i];
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("%lld\n", max_sum);
    return 0;
}
