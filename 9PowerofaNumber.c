#include <stdio.h>

int main() {

    int base_num, exponent, result = 1;
    printf("Enter base number: ");
    scanf("%d", &base_num);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for (int i = 0; i < exponent; i++) {
        result *= base_num;
    }
    printf("Result: %d\n", result);

    return 0;
}
