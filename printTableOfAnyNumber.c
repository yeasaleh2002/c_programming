#include<stdio.h>
int main(){
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n table of %d", num);
    for(i = 1; i<=10; i=i+1){
        printf("\n %d * %d = %d", num, i, (num * i));
    };
  return 0;
}
