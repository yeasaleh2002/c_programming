
#include <stdio.h>

int main() {
  int n, a, b, sum , mul;

  printf("Enter an integer for n : ");
  scanf("%d", &n);
  scanf("%d", &a);
  scanf("%d", &b);
  sum = a + b;
  mul = a * b;
  if (n == 1) {
    printf("Sum: %d", sum);
  } else {

    printf("Multi %d", mul);
  }
  return 0;
}
