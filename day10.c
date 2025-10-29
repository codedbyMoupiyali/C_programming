#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter the three side lengths of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }
    
    return 0;
}
