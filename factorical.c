#include <stdio.h>

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

   unsigned long long int factorial = 1;
    int i;
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %llu\n", number, factorial);

    return 0;
}
