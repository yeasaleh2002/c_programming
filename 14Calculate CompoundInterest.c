#include <stdio.h>
int main() {

    float principle, rate, time, compound_interest;
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter annual interest rate: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    compound_interest = principle * (pow((1 + rate / 100), time) - 1);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
