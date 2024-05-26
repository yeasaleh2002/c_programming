#include <stdio.h>

int main() {
    int amount;

    printf("Enter the amount in Bangladeshi Taka (BDT): ");
    scanf("%d", &amount);

    int count_1000 = 0, count_500 = 0, count_100 = 0, count_50 = 0, count_20 = 0, count_10 = 0, count_5 = 0, count_2 = 0, count_1 = 0;

    if (amount >= 1000) {
        count_1000 = amount / 1000;
        amount %= 1000;
    }

    if (amount >= 500) {
        count_500 = amount / 500;
        amount %= 500;
    }

    if (amount >= 100) {
        count_100 = amount / 100;
        amount %= 100;
    }

    if (amount >= 50) {
        count_50 = amount / 50;
        amount %= 50;
    }

    if (amount >= 20) {
        count_20 = amount / 20;
        amount %= 20;
    }

    if (amount >= 10) {
        count_10 = amount / 10;
        amount %= 10;
    }

    if (amount >= 5) {
        count_5 = amount / 5;
        amount %= 5;
    }

    if (amount >= 2) {
        count_2 = amount / 2;
        amount %= 2;
    }

    if (amount >= 1) {
        count_1 = amount;
    }

    printf("Denomination\tCount\n");
    printf("1000 BDT\t%d\n", count_1000);
    printf("500 BDT\t%d\n", count_500);
    printf("100 BDT\t%d\n", count_100);
    printf("50 BDT\t%d\n", count_50);
    printf("20 BDT\t%d\n", count_20);
    printf("10 BDT\t%d\n", count_10);
    printf("5 BDT\t%d\n", count_5);
    printf("2 BDT\t%d\n", count_2);
    printf("1 BDT\t%d\n", count_1);

    return 0;
}
