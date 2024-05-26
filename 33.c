#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    float percentage;

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks for Biology: ");
    scanf("%d", &biology);
    printf("Enter marks for Mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    int totalMarks = physics + chemistry + biology + mathematics + computer;
    percentage = (float)totalMarks / 500 * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage > 90) {
        printf("Grade A\n");
    } else if (percentage > 80) {
        printf("Grade B\n");
    } else if (percentage > 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}

