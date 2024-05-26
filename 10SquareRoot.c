#include <stdio.h>

int main() {

    float number, square_root;
    printf("Enter a number: ");
    scanf("%f", &number);
    square_root = sqrt(number);
    printf("Square root is: %.2f\n", square_root);

}
