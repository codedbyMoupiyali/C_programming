#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int answer[n];
    for(int i = 0; i < n; i++) {
        answer[i] = 1;
    }
    
    // Compute prefix products
    int prefix = 1;
    for(int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }
    
    // Compute suffix products
    int suffix = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
    
    // Print the answer array
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
