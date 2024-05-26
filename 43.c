
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n >= 1) {
        printf("%d ", n);
        n--;
    }

    printf("\n");
    return 0;
}
