#include <stdio.h>
int main() {
    int late_days;
    float fine = 0.0;
    printf("Enter the number of late days: ");
    scanf("%d", &late_days);
    if (late_days <= 5) {
        fine = late_days * 2.0;
        printf("Fine: ₹%.2f\n", fine);
    } else if (late_days <= 10) {
        fine = (5 * 2.0) + ((late_days - 5) * 4.0);
        printf("Fine: ₹%.2f\n", fine);
    } else if (late_days <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((late_days - 10) * 6.0);
        printf("Fine: ₹%.2f\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }
    return 0;
}
