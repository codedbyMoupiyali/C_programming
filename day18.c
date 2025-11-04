#include <stdio.h>
#include <math.h>
int main() {
    int num, i;  
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
  
    for (i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            printf("%d ", i);
            if (i != num / i) {
                printf("%d ", num / i);
            }
        }
    }
    printf("\n");
    return 0;
}
