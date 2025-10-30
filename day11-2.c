#include <stdio.h>
int main() {
    float cp, sp, profit, loss, percentage;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (sp < cp) {
       
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
       
        printf("No profit or loss.\n");
    }

    return 0;
}
