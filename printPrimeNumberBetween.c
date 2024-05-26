
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume i is prime

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // If divisible, not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
