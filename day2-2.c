#include <stdio.h>
#define PI 3.14159
int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    return 0;
}
