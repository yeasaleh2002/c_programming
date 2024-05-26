#include <stdio.h>

int main() {
    int num1, num2, num3, max, min;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find maximum
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Find minimum
    min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}
