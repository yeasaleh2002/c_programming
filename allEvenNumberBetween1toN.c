#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even numbers between 1 and %d are:\n", n);

    for (int i = 2; i <= n; i += 2){
        printf("%d\n", i);
    };

    return 0;
}
