#include<stdio.h>
int main (){

int i, n, sum=0;
printf("Enter the value of n:");
scanf("%d", &n);
for (i = 0; i <= n; i=i+1){
    sum=sum + i;
}
printf("sum: %d \n", sum);
return 0;
}
