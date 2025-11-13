#include <stdio.h>
int main() {
    for (int i = 1; i <= 7; i++) {
        int stars;
        if (i <= 4) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (8 - i) - 1;
        }
        int spaces = (7 - stars) / 2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}