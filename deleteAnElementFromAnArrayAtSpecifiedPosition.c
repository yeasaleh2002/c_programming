#include <stdio.h>

int main() {
    int size, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);

    if (position < 1 || position > size) {
        printf("Invalid position!\n");
        return 1; // Exit program with an error code
    }

    // Shift elements to the left to overwrite the deleted element
    for (int i = position; i < size; i++) {
        arr[i - 1] = arr[i];
    }

    size--; // Reduce the size of the array

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
