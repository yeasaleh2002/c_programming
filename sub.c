#include<stdio.h>
int main()
{
  int a, b, newValue;
  printf("Enter the value of a \n");
  scanf("%d", &a);
  printf("Enter the value of b \n");
  scanf("%d", &b);
  newValue = a - b;
  printf("The substraction of a and b is %d\n", newValue);
  return 0;
}

