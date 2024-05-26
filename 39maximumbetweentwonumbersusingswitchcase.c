#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (num1 > num2 ? 1 : 2) {
        case 1:
            printf("%d is the maximum.\n", num1);
            break;
        case 2:
            printf("%d is the maximum.\n", num2);
            break;
        default:
            printf("Both numbers are equal.\n");
    }
    return 0;
}
