#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of a triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1 &&
        side1 > 0 && side2 > 0 && side3 > 0) {
        printf("These side lengths form a valid triangle.\n");
    } else {
        printf("These side lengths do not form a valid triangle.\n");
    }

    return 0;
}
