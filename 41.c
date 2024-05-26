#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0 ? 1 : (discriminant < 0 ? -1 : 0)) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
            break;
        case 0:
            root1 = -b / (2 * a);
            printf("One real root (repeated): %.2lf\n", root1);
            break;
        case -1:
            printf("No real roots (complex roots).\n");
            break;
    }

    return 0;
}

