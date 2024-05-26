#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter a month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) {
        if (monthNumber == 2) {
            printf("February has 28 or 29 days.\n");
        } else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) {
            printf("The month has 30 days.\n");
        } else {
            printf("The month has 31 days.\n");
        }
    } else {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
