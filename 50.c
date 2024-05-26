
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }

    firstDigit = num;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}
