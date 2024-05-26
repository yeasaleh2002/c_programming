#include<stdio.h>
int main (){
int n;
printf("Please enter you number: ");
scanf("%d", &n);
if(n<0 || n> 100){
    printf("invalid input\n");
} else if(n>=0 && n<=39){
    printf("Fail\n");
} else if(n>=40 && n<=44){
    printf("D grade\n");
} else if(n>=45 && n<=49){
    printf("C grade\n");
} else if(n>=50 && n<=54){
    printf("C+ grade\n");
} else if(n>=55 && n<=59){
    printf("B- grade\n");
} else if(n>=60 && n<=64){
    printf("B grade\n");
} else if(n>=65 && n<=69){
    printf("B+ grade\n");
} else if(n>=70 && n<=74){
    printf("A- grade\n");
} else if(n>=75 && n<=79){
    printf("A grade\n");
} else{
    printf("A+ grade\n");
};

return 0;
}
