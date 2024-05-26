#include <stdio.h>

int main() {

    float side_length, equilateral_area;
    printf("Enter the side length of an equilateral triangle: ");
    scanf("%f", &side_length);
    equilateral_area = (sqrt(3) / 4) * side_length * side_length;
    printf("Area of the equilateral triangle is: %.2f\n", equilateral_area);

    return 0;
}
