#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("The largest number is %.2f\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is %.2f\n", b);
    } else {
        printf("The largest number is %.2f\n", c);
    } 
    return 0;
}
