#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    long long arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    
    long long max_so_far = arr[0];
    long long curr_max = arr[0];
    
    for(int i = 1; i < n; i++) {
        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : curr_max + arr[i];
        max_so_far = (max_so_far > curr_max) ? max_so_far : curr_max;
    }
    
    printf("%lld\n", max_so_far);
    return 0;
}
