#include <stdio.h>

int main() {
    int x, c, p;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    p = x * x + 2 * x + c;

    printf("The value of p is: %d\n", p);

    return 0;
}
