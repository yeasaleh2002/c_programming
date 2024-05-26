#include <stdio.h>

int main() {
    int values[] = {5, 7, 3, 6, 9, 10, 15, 2, 1, 4};
    int size = sizeof(values) / sizeof(values[0]);

    int highest = values[0]; // Assume the first element is the highest

    // Iterate through the array and update 'highest' if a higher value is found
    for (int i = 1; i < size; i++) {
        if (values[i] > highest) {
            highest = values[i];
        }
    }

    printf("The highest value in the array is: %d\n", highest);

    return 0;
}
