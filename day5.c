#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate); 
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    float simpleInterest = (principal * rate * time) / 100;
    float compoundInterest = principal * (pow(1 + rate / 100, time) - 1);
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);
    return 0;
}
