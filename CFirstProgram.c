#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits using a for loop
    for (int temp = number; temp != 0; temp /= 10) {
        sum += temp % 10;
    }

    printf("Sum of digits of %d: %d\n", number, sum);

    return 0;
}
