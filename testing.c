#include <stdio.h>

int main() {
    int rows;

    // Prompt user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate and print the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("1 ");
        }
        printf("\n");
    }

    return 0;
}
