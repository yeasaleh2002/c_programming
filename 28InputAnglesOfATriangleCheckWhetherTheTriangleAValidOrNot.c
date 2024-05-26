#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("These angles form a valid triangle.\n");
    } else {
        printf("These angles do not form a valid triangle.\n");
    }

    return 0;
}
