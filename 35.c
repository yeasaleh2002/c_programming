#include <stdio.h>

int main() {
    int units;
    float totalBill;
    printf("Enter the electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Additional surcharge of 20%
    totalBill = totalBill + (0.20 * totalBill);

    printf("Total electricity bill: %.2f\n", totalBill);

    return 0;
}

