#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice > sellingPrice) {
        printf("Loss of %.2f\n", costPrice - sellingPrice);
    } else if (costPrice < sellingPrice) {
        printf("Profit of %.2f\n", sellingPrice - costPrice);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}

