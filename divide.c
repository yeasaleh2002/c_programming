#include<stdio.h>
int main()
{
  int a, b, divide;
  int remainder;
  printf("Enter the value of a \n");
  scanf("%d", &a);
  printf("Enter the value of b \n");
  scanf("%d", &b);
  divide = a / b;
  printf("The divide of a and b is %d\n", divide);
  return 0;
}

