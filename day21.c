#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    if (num == 0) {
        printf("Swapped number: 0\n");
        return 0;
    }
    int digits = (int)floor(log10(num)) + 1;
    int first = num / (int)pow(10, digits - 1);
    int last = num % 10;
    int middle = (num % (int)pow(10, digits - 1)) / 10;
    int new_num = last * (int)pow(10, digits - 1) + middle * 10 + first;
    printf("Original number: %d\n", num);
    printf("Swapped number: %d\n", new_num);
    return 0;
}
