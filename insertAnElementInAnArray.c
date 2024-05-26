#include <stdio.h>

int main() {
    int size, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size + 1];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    if (position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;

    printf("Array after insertion:\n");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
