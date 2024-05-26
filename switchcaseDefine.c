#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of x: ");
    scanf("%d", &x);

    switch(x){
     case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    default :
        printf("Others");
    }
return 0;
}
