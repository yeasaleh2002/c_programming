#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    printf("Enter source array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &sourceArray[i]);
    }

    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[i];
    }

    printf("Elements copied to destination array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}


