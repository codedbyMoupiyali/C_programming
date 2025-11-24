#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int target;
    scanf("%d", &target);
    
    int first = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            if (mid == 0 || nums[mid - 1] != target) {
                first = mid;
                break;
            } else {
                high = mid - 1;
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    int last = -1;
    low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            if (mid == n - 1 || nums[mid + 1] != target) {
                last = mid;
                break;
            } else {
                low = mid + 1;
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    printf("%d %d\n", first, last);
    return 0;
}
