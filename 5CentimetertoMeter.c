#include <stdio.h>

int main() {
    float cm, meters, kilometers;

    printf("Enter length in centimeters: ");
    scanf("%f", &cm);

    meters = cm / 100.0;
    kilometers = cm / 100000.0;

    printf("Length in meters: %.2f\n", meters);
    printf("Length in kilometers: %.2f\n", kilometers);

    return 0;
}
