#include <stdio.h>

int main() {

    int marks[5], total = 0;
    float average, percentage;
    printf("Enter marks for five subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = (float)total / 5;
    percentage = (float)total / (5 * 100) * 100;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
