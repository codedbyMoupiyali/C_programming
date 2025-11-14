#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    if (num < 0) num = -num;
    
    int count[10] = {0};
    
    if (num == 0) {
        count[0] = 1;
    } else {
        while (num > 0) {
            int digit = num % 10;
            count[digit]++;
            num /= 10;
        }
    }
    
    int max_count = 0;
    int max_digit = -1;
    
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }
    
    printf("%d\n", max_digit);
    return 0;
}
