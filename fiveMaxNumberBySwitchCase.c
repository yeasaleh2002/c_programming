#include<stdio.h>

int main()
{
    int number1, number2, number3, number4, number5;
    printf("Enter the Five numbers: ");
    scanf("%d%d%d%d%d", &number1, &number2, &number3, &number4, &number5);

    switch(
            (((number1 > number2) && (number1 > number3) && (number1 > number4) && (number1 > number5)) && 1) ||
            (((number2 > number1) && (number2 > number3) && (number2 > number4) && (number2 > number5)) && 2) ||
            (((number3 > number1) && (number3 > number2) && (number3 > number4) && (number3 > number5)) && 3) ||
            (((number4 > number1) && (number4 > number2) && (number4 > number3) && (number4 > number5)) && 4) ||
            (((number5 > number1) && (number5 > number2) && (number5 > number3) && (number5 > number4) && 5))
           ){
    case 1:
        printf("Number1 is maximum");
        break;
    case 2 :
        printf("Number 2 is maximum");
        break;
    case 3 :
        printf("Number 3 is maximum");
        break;
    case 4 :
        printf("Number 4 is maximum");
        break;
    case 5 :
        printf("Number 5 is maximum");
        break;
    default:
        printf("Wrong Number");
    }

    return 0;
}
