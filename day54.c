#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long S = n * (n + 1) / 2;
    long long x = (long long) sqrt(S);
    if (x * x == S && x >= 1 && x <= n) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }
    return 0;
}
